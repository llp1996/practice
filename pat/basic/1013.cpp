//注意按规则输出数字
#include<iostream>  
#include<vector>  
#include<math.h>  
using namespace std;
bool is_prim(int a);
int main(int argc, char*argv[])
{
	int begin = 0;
	int end = 0;
	cin >> begin >> end;
	int i = 0;
	int num = 2;
	vector<int>prims;
	while (i <= end)
	{
		if (is_prim(num))
		{
			prims.push_back(num);
			i++;
		}
		num++;
	}
	cout << prims[begin - 1];
	for (int i = begin; i < end; i++)
	{
		if ((i - begin) % 10 == 9)
			cout << "\n";
		else
			cout << " ";
		cout << prims[i];
	}
	return 0;
}
bool is_prim(int a)
{
	for (int i = 2; i <= sqrt(a); i++)
		if (a%i == 0)
			return false;
	return true;
}