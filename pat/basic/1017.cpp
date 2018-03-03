
//注意最好不要分段计算，而是逐位的计算并输出商数和余数
#include <iostream>  
#include <string>  

using namespace std;

int main() {
	string s;
	cin >> s;
	int a;
	cin >> a;
	int len = s.length();
	int t = (s[0] - '0') / a;
	if ((t != 0 && len>1) || len == 1) {
		cout << t;
	}
	int temp = (s[0] - '0') % a;
	for (int i = 1; i<len; i++) {
		t = (temp * 10 + s[i] - '0') / a;
		cout << t;
		temp = (temp * 10 + s[i] - '0') % a;
	}
	cout << " " << temp;
	return 0;
}