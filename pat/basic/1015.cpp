#include<cstdio>  
#include<vector>  

//注意使用algrothm库中的sort函数来进行自定义排序

//注意使用scanf(在ide中是scanf_s)来解决运行超时问题，不要用iostream
#include<algorithm>  
struct stu {
	int num;
	int de;
	int cai;
	int lei;
};
bool compare(stu a, stu b);
using namespace std;
int main(int argc, char*argv[])
{
	int N, L, H;
	scanf_s("%d %d %d", &N, &L, &H);
	vector<stu>stus(N);
	int M = 0;
	for (int i = 0; i < N; i++)
	{
		//cin >> stus[i].num >> stus[i].de >> stus[i].cai;  
		scanf_s("%d %d %d", &stus[i].num, &stus[i].de, &stus[i].cai);
		if (stus[i].de >= H&&stus[i].cai >= H)
			stus[i].lei = 0;
		else if (stus[i].de >= H&&stus[i].cai < H&&stus[i].cai >= L)
			stus[i].lei = 1;
		else if (stus[i].de < H&&stus[i].de >= L&&stus[i].cai < H&&stus[i].cai >= L&&stus[i].de >= stus[i].cai)
			stus[i].lei = 2;
		else if (stus[i].de < H&&stus[i].de >= L&&stus[i].cai >= L&&stus[i].de < stus[i].cai)
			stus[i].lei = 3;
		else
		{
			stus[i].lei = 4;
			M++;
		}
	}
	sort(&stus[0], &stus[0] + N, compare);
	printf("%d\n", N - M);
	for (int i = 0; i < N - M; i++)
		printf("%d %d %d\n", stus[i].num, stus[i].de, stus[i].cai);
	//cout << stus[i].num << " " << stus[i].de << " " << stus[i].cai << endl;  
	return 0;
}
bool compare(stu a, stu b)
{
	if (a.lei < b.lei)
		return true;
	else if (a.lei>b.lei)
		return false;
	else {
		if (a.de + a.cai > b.de + b.cai)
			return true;
		else if (a.de + a.cai < b.de + b.cai)
			return false;
		else {
			if (a.de > b.de)
				return true;
			else if (a.de < b.de)
				return false;
			else
				return a.num < b.num;
		}
	}
}