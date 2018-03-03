
//注意main函数的入口参数
#include<iostream>  
int main(int argc, char*argv[])
{
	using namespace std;
	int input = 0;
	int res = 0;
	cin >> input;
	while (input != 1)
	{
		if (input % 2 == 0)
			input /= 2;
		else
			input = (input * 3 + 1) / 2;
		res++;
	}
	cout << res;
	return 0;
}