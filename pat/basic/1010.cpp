//注意零多项式求导还是零多项式
#include<iostream>  
#include<vector>  
using namespace std;
int main(int argc, char*argv[])
{
	vector<int>num;
	vector<int>index;
	int a, b;
	while (cin >> a >> b)
	{
		num.push_back(a);
		index.push_back(b);
	}
	for (int i = 0; i < num.size(); i++)
	{
		num[i] *= index[i];
		index[i]--;
	}
	if (index[0] == -1)
		cout << "0 0";
	else
		cout << num[0] << " " << index[0];

	for (int i = 1; i < num.size(); i++)
	{
		if (index[i] != -1)
			cout << " " << num[i] << " " << index[i];
	}

	return 0;
}