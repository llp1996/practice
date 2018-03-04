#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char*argv[])
{
	int sum;
	cin >> sum;
	vector<int>floors(sum);
	for (int i = 0; i < sum; i++)
		cin >> floors[i];
	int pre=0;
	int out=0;
	for (int i = 0; i < sum; i++)
	{
		if (floors[i] > pre)
			out += (floors[i] - pre) * 6;
		else if (floors[i] < pre)
			out += (pre - floors[i]) * 4;
		out += 5;
		pre = floors[i];
	}
	cout << out;

	return 0;
}
