#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(void) {
	string s = " ";
	stack<char> st;
	int n;
	cin >> n;
	cout << n << endl;
	for (int i = 0; i < n; i++) {
		cout << "dd\n";
		cin >> s;
		if (s == ".")
			break;
		else {
			while (1) {
				if (s.back() == ')') {
					st.push(s.back());
					s.pop_back();
				}
				else if (s.back() == '(') {
					if (st.empty()) {
						cout << "NO\n";
						break;
					}
					else
						if (s.back() == '(' && st.top() == ')') {
							st.pop();
							s.pop_back();
						}
						else {
							cout << "NO\n";
							break;
						}
				}
				else {
					s.pop_back();
				}
				if (s.size() == 0) {
					if (st.size() > 0)
						cout << "NO\n";
					else
						cout << "YES\n";
					break;
				}
			}
			while (st.size() > 0) {
				st.pop();
			}
			s.clear();
		}
	}
	return 0;
}