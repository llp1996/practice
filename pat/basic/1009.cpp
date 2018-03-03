
//注意stack的使用
#include <iostream>   
#include<string>  
#include <stack>    
using namespace std;

int main() {
	stack<string> s;
	string a;
	cin >> a;
	s.push(a);
	while (cin.get() != '\n')
	{
		cin >> a;
		s.push(a);
	}
	cout << s.top();
	s.pop();
	while (!s.empty()) {
		cout << " " << s.top();
		s.pop();
	}
	return 0;
}