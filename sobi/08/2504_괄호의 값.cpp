#include<iostream>
#include<stack>
#include<string>
using namespace std;

struct node {
	int a = 0;
	char b = '0';
};

int main(void) {
	string s;
	stack<struct node>st;
	struct node tmp;
	int sum = 0;
	int num = 0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		cout << "현재 " << s[i] << endl;
		if (st.size() > 0) {
			cout << "현재 top " << st.top().a << ", " << st.top().b << endl;
		}
		if (s[i] == '(' || s[i] == '[') {
			cout << "push " << s[i] << endl;
			tmp.a = 0; tmp.b = s[i];
			st.push(tmp);
		}
		else {
			if (st.empty()) {
				cout << 0;
				return 0;
			}
			else if (s[i] == ')') {
				if (st.top().b == '(') {
					cout << "top이 (라서 ()돼서 2\n";
					st.pop();
					num = 2;
				}
				else if (st.top().b == '[') {
					cout << 0;
					return 0;
				}
				else { //숫자면
					cout << "top이 숫자라서 *2\n";
					num = st.top().a * 2;
					st.pop();
					if (st.empty()) {
						cout << 0;
						return 0;
					}
					else if (st.top().b == '(') {
						st.pop();
					}
					else {
						cout << 0;
						return 0;
					}
				}
			}
			else if (s[i] == ']') {
				if (st.top().b == '[') {
					st.pop();
					num = 3;

				}
				else if (st.top().b == '(') {
					cout << 0;
					return 0;
				}
				else { //숫자면
					num = st.top().a * 3;
					st.pop();
					if (st.empty()) {
						cout << 0;
						return 0;
					}
					else if (st.top().b == '[') {
						st.pop();
					}
					else {
						cout << 0;
						return 0;
					}

				}
			}
			if (st.empty()) {
				tmp.a = num; tmp.b = '0';
				st.push(tmp);
			}
			else if (st.top().a > 0) { // 숫자면 더하기

				st.top().a = st.top().a + num;
			}
			else {
				cout << "숫자가 아니라서 숫자 넣기\n";
				tmp.a = num;
				tmp.b = '0';
				st.push(tmp);
			}
		}
	}
	if (st.empty() || st.size() > 1) {
		cout << 0;
	}
	else
		cout << "최종 : " << st.top().a;
	return 0;
}