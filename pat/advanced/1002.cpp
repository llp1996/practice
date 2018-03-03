//注意会出现两个系数相加为零的情况

//注意输入输出使用scanf和printf，
#include<iostream>  
#include<vector>  
struct po {  
    int ex;  
    double cof;  
};  
using namespace std;  
int main(int argc, char*argv[])  
{  
    int term1,term2,term(0);  
    int temp(0);  
    cin >> term1;  
    vector<po>po1(term1);  
    for (int i = 0; i < term1; i++)  
        //cin >> po1[i].ex >> po1[i].cof;  
        scanf("%d %lf ", &po1[i].ex, &po1[i].cof);  
    cin >> term2;  
    vector<po>po2(term2);  
    for (int i = 0; i < term2; i++)  
        scanf("%d %lf ", &po2[i].ex, &po2[i].cof);  
        //cin >> po2[i].ex >> po2[i].cof;  
    vector<po>out;  
    int ind1(0), ind2(0);  
    while (ind1 < po1.size() && ind2 < po2.size())  
    {  
        if (po1[ind1].ex < po2[ind2].ex)  
        {  
            out.push_back(po2[ind2]);  
            ind2++;  
        }  
        else if (po1[ind1].ex < po2[ind2].ex)  
        {  
            out.push_back(po1[ind1]);  
            ind1++;  
        }  
        else  
        {  
            if (po1[ind1].cof + po2[ind2].cof == 0)  
            {  
                ind1++;  
                ind2++;  
                continue;  
            }  
            out.push_back(po{ po1[ind1].ex,po1[ind1].cof + po2[ind2].cof });  
            ind1++;  
            ind2++;  
        }  
    }  
    if(ind1==po1.size())  
        while (ind2 < po2.size())  
        {  
            out.push_back(po2[ind2]);  
            ind2++;  
        }  
    if(ind2==po2.size())  
        while (ind1 < po1.size())  
        {  
            out.push_back(po1[ind1]);  
            ind1++;  
        }  
    cout << out.size();  
    for (auto i : out)  
        printf(" %d %.1lf", i.ex, i.cof);  
    return 0;  
}  
