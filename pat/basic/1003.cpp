//注意判断条件中前面每多一个A后面就多两个A,中间的A任意多
#include<iostream>  
#include<string>  
#include<vector>  
using namespace std;
void isPat(string str);
int main(int argc, char*argv[])
{
	int sum;
	cin >> sum;
	vector<string>test(sum);

	for (int i = 0; i < sum; i++)
		cin >> test[i];
	for (int i = 0; i < sum; i++)
		isPat(test[i]);
	return 0;
}
void isPat(string str)
{
	int countP = 0;
	int countT = 0;
	int localP = 0;
	int localT = 0;
	bool status = true;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != 'P'&&str[i] != 'A'&&str[i] != 'T')
			status = false;
		if (str[i] == 'P')
		{
			countP++; localP = i;
		}
		if (str[i] == 'T')
		{
			countT++; localT = i;
		}
	}
	if (countP == 1 && countT == 1 && status && (localT - localP - 1) >= 1 && localP*(localT - localP - 1) == (str.length() - 1 - localT))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}