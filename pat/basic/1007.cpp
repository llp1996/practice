//注意判断素数只需判断是否整除2到平方根之间的整数
#include<iostream>  
#include<cmath>  
#include<vector>  
using namespace std;
bool is_prim(int a);
int main(int argc, char*argv[])
{
	int num = 0;
	cin >> num;
	int count = 0;
	vector<int>prims;
	for (int i = 2; i <= num; i++)
		if (is_prim(i))
			prims.push_back(i);
	for (int i = 0; i < prims.size() - 1; i++)
		if ((prims[i + 1] - prims[i]) == 2)
			count++;
	cout << count << endl;
	return 0;
}
bool is_prim(int a)
{
	for (int i = 2; i <= sqrt(a); i++)
		if (a%i == 0)
			return false;
	return true;
}
