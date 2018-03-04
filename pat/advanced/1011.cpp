//及其笨拙的方法，以及四舍五入做的不大好
#include<iostream>
#include<string>
using namespace std;
int main(int argc, char*argv[])
{
	string g[3] = {"W","T","L"};
	double g1[3];
	double g2[3];
	double g3[3];
	cin >> g1[0] >> g1[1] >> g1[2];
	cin >> g2[0] >> g2[1] >> g2[2];
	cin >> g3[0] >> g3[1] >> g3[2];
	string out1;
	double out2(1.0);
	int temp1(0); double temp2(0.0);
	for (int i = 0; i < 3; i++)
	{
		if (g1[i] > temp2)
		{
			temp1 = i;
			temp2 = g1[i];
		}
	}
	out1 += g[temp1] + " ";
	out2 *= temp2;
	temp1 = 0;
	temp2 = 0.0;
	for (int i = 0; i < 3; i++)
	{
		if (g2[i] > temp2)
		{
			temp1 = i;
			temp2 = g2[i];
		}
	}
	out1 += g[temp1] + " ";
	out2 *= temp2;
	temp1 = 0;
	temp2 = 0.0; 
	for (int i = 0; i < 3; i++)
	{
		if (g3[i] > temp2)
		{
			temp1 = i;
			temp2 = g3[i];
		}
	}
	out1 += g[temp1] + " ";
	out2 *= temp2;
	out2 = (out2*0.65 - 1) * 2;
	out2 = int(out2 * 100 + 0.50001) / 100.0;
	cout << out1 << out2;
	
	return 0;
}
