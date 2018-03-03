//注意stack的使用和将字符串转化为string的函数
#include<iostream>  
#include<string>  
#include<stack>  
using namespace std;  
int main(int argc, char*argv[])  
{  
    int A, B;  
    cin >> A >> B;  
    char st[10];  
    sprintf(st, "%d", A+B);  
    string str(st);  
    stack<string>out;  
    if (str[0] == '-')  
    {  
        cout << str[0];  
        str.erase(0,1);  
    }  
    if (str.size() < 4)  
        cout << str;  
    else {  
        while (str.size() > 3)  
        {  
            out.push(str.substr(str.size() - 3, 3));  
            str.erase(str.size() - 3, 3);  
            out.push(",");  
        }  
        out.push(str);  
        while (!out.empty())  
        {  
            cout << out.top();  
            out.pop();  
        }  
    }  
    return 0;  
}  
