//注意只输入一个零的情况，
#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(int argc,char*argv[])
{
	string ch[10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
	string input;
	cin >> input;
	int sum = 0;
	for (int i = 0; i < input.size(); i++)
		sum += input[i] - 48;
	stack<string>out;
	if (sum == 0)
	{
		cout << "zero";
		return 0;
	}
	while (sum)
	{
		out.push(ch[sum % 10]);
		sum /= 10;
	}
	cout << out.top();
	out.pop();
	while (!out.empty())
	{
		cout << " " << out.top();
		out.pop();
	}
	return 0;
}
