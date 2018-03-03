#include<iostream>  
using namespace std;
int main(int argc, char*argv[])
{
	int win(0), loss(0), ping(0);
	int jia[3] = { 0,0,0 };
	int yi[3] = { 0,0,0 };
	int num;
	cin >> num;
	char a, b;
	for (int i = 0; i < num; i++)
	{
		cin >> a >> b;
		switch (a - b)
		{
		case 0:
			ping++; break;
		case 1:
			yi[0]++; loss++; break;
		case -1:
			jia[0]++; win++; break;
		case 8:
			jia[2]++; win++; break;
		case -8:
			yi[2]++; loss++; break;
		case 7:
			yi[1]++; loss++; break;
		case -7:
			jia[1]++; win++; break;
		default:
			;
		}
	}
	cout << win << " " << ping << " " << loss << endl;
	cout << loss << " " << ping << " " << win << endl;
	int a1(0), a2(0);
	int b1(0), b2(0);
	for (int i = 0; i < 3; i++)
	{
		if (jia[i] > a1)
		{
			a2 = i; a1 = jia[i];
		}
		if (yi[i] > b1)
		{
			b2 = i; b1 = yi[i];
		}
	}
	switch (a2)
	{
	case 0:
		cout << "B "; break;
	case 1:
		cout << "C "; break;
	case 2:
		cout << "J "; break;
	default:;
	}
	switch (b2)
	{
	case 0:
		cout << "B"; break;
	case 1:
		cout << "C"; break;
	case 2:
		cout << "J"; break;
	default:;
	}
}