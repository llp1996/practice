//字符与数字的转换
#include<iostream>  
#include<string>  
using namespace std;
int main(int argc, char*argv[])
{
	int num = 0;
	cin >> num;
	string out;
	int tem = num % 10;
	num /= 10;
	for (int i = 0; i<tem; i++)
		out += (char)(i + 49);
	tem = num % 10;
	num /= 10;
	for (int i = 0; i<tem; i++)
		out = 'S' + out;
	for (int i = 0; i<num; i++)
		out = 'B' + out;
	cout << out << endl;
	return 0;
}