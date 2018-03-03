#include<iostream>  
#include<string>  
#include<vector>  
using namespace std;
int main(int argc, char*argv[])
{
	int sum = 0;
	cin >> sum;
	vector<string>name(sum);
	vector<string>number(sum);
	vector<int>score(sum);

	for (int i = 0; i < sum; i++)
	{
		cin >> name[i] >> number[i] >> score[i];
	}
	int high = 0;
	int low = 0;
	int score_high = 0;
	int score_low = 100;
	for (int i = 0; i < sum; i++)
	{
		if (score[i] > score_high)
		{
			high = i; score_high = score[i];
		}
		if (score[i] < score_low)
		{
			low = i; score_low = score[i];
		}
	}
	cout << name[high] << " " << number[high] << endl;
	cout << name[low] << " " << number[low] << endl;
	return 0;
}