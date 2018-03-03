//采用求余遍历来找数字
#include<iostream>  
using namespace std;
int main(int argc, char*argv[])
{
	long long A, B;
	int Da, Db;
	cin >> A >> Da >> B >> Db;
	int Pa = 0;
	int Pb = 0;
	int ina = 1;
	int inb = 1;
	while (A)
	{
		if (A % 10 == Da)
		{
			Pa += Da*ina;
			ina *= 10;
		}
		A /= 10;
	}
	while (B)
	{
		if (B % 10 == Db)
		{
			Pb += Db*inb;
			inb *= 10;
		}
		B /= 10;
	}
	cout << Pa + Pb;
	return 0;
}