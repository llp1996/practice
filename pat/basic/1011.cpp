//注意使用longlong类型，两个大数相加有可能超出范围
#include<iostream>  
#include<vector>  
using namespace std;
int main(int argc, char*argv[])
{

	int sum;
	cin >> sum;
	vector<vector<long long> >arrays;
	for (int i = 0; i < sum; i++)
	{
		vector<long long>a(3);
		cin >> a[0] >> a[1] >> a[2];
		arrays.push_back(a);
	}
	for (int i = 0; i < arrays.size(); i++)
	{
		cout << "Case #" << i + 1 << ": ";
		if (arrays[i][0] + arrays[i][1] > arrays[i][2])
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}

	return 0;
}