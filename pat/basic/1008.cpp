
//每个元素只需移动一次，使用eculid算法求最大公因子
#include<iostream>  
#include<string>  
using namespace std;
int eculid(int a, int b);
int main(int argc, char*argv[])
{
	int sum;
	int move;
	cin >> sum >> move;
	int *arr = new int[sum];
	for (int i = 0; i < sum; i++)
		cin >> arr[i];
	while (move > sum)
		move -= sum;

	int groups = eculid(sum, move);
	int step = sum / groups;
	for (int i = 0; i < groups; i++)
	{
		int s = 0;
		int b = i;
		int temp = arr[b];
		while (s < step - 1)
		{
			int a = b < move ? b + sum - move : b - move;
			arr[b] = arr[a];
			b = a;
			s++;
		}
		arr[b] = temp;
	}
	for (int i = 0; i < sum - 1; i++)
		cout << arr[i] << " ";
	cout << arr[sum - 1];
	delete[]arr;
	return 0;
}
int eculid(int a, int b)
{
	while (b != 0)
	{
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}