
//注意字符中字符与数字的转换
#include<iostream>  
#include<string>  
using namespace std;

int main(int argc, char*argv[])
{
	string str[10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	string input;
	int res = 0;
	cin >> input;
	int index = 0;
	while (input[index] != '\0')
	{
		res += input[index] - 48;
		index++;
	}
	string result;
	if (res == 0)
		result = "ling";
	else {
		result = str[res % 10];
		res /= 10;

		while (res != 0)
		{
			result = str[res % 10] + " " + result;
			res /= 10;
		}
	}
	cout << result;
	return 0;
}