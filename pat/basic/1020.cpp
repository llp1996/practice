//注意输出格式即可，
//还有就是最好避免强制类型转换，而是一开始就用float
#include<iostream>  
#include<vector>  
#include<algorithm>  
#include<iomanip>  
using namespace std;
struct goods {
	float s;
	float price;
};
bool compare(goods a, goods b)
{
	return a.price / a.s > b.price / b.s;
}
int main(int argc, char*argv[])
{
	int sum, max;
	cin >> sum >> max;
	vector<goods>stock(sum);
	for (int i = 0; i < sum; i++)
		cin >> stock[i].s;
	for (int i = 0; i < sum; i++)
		cin >> stock[i].price;
	sort(stock.begin(), stock.end(), compare);
	float maxprofit = 0;
	for (int i = 0; i < sum; i++)
	{
		if (stock[i].s <= max)
			maxprofit += stock[i].price;
		else
		{
			maxprofit += stock[i].price / stock[i].s*max;
			break;
		}
		max -= stock[i].s;
	}
	cout << setiosflags(ios::fixed) << setprecision(2) << maxprofit;
	return 0;
}