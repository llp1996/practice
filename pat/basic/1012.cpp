//注意算法库中函数的使用，求和，求最大值，求积，注意格式化输出小数
#include<iostream>  
#include<vector>  
#include<numeric>  
#include<functional>  
#include<iomanip>  
#include<algorithm>  
#include"stdlib.h"  
using namespace std;
int main(int argc, char*argv[])
{

	int sum;
	cin >> sum;
	vector<int>nums(sum);
	for (int i = 0; i < sum; i++)
		cin >> nums[i];
	vector<vector<int> >clfs(5);
	for (auto i : nums)
	{
		if (i % 5 == 0)
		{
			if (i % 2 == 0)
				clfs[0].push_back(i);
		}
		else
			clfs[i % 5].push_back(i);
	}
	for (int j = 0; j < clfs.size(); j++)
	{
		int sig = 1;
		int sum = 0;
		double avr;
		if (clfs[j].size() != 0)
		{
			switch (j) {
			case 0:
				cout << accumulate(clfs[j].begin(), clfs[j].end(), 0);
				break;
			case 1:
				for (auto i : clfs[j])
				{
					sum += sig*i;
					sig *= -1;
				}
				cout << " " << sum;
				break;
			case 2:
				cout << " " << clfs[j].size();
				break;
			case 3:
				avr = accumulate(clfs[j].begin(), clfs[j].end(), 0.0) / clfs[j].size();
				cout << " " << setiosflags(ios::fixed) << setprecision(1) << avr;
				break;
			case 4:
				cout << " " << *(max_element(clfs[j].begin(), clfs[j].end()));
				break;
			default:
				;
			}
		}
		else
		{
			if (j == 0)
				cout << 'N';
			else
				cout << " N";
		}
	}
	return 0;
}