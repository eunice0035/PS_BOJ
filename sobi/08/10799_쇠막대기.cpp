#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void) {
	string s;
	stack<char> st;
	char tmp;
	int sum = 0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') {
			st.push(s[i]);
		}
		else if (s[i] == ')') {
			if (tmp == '(') {
				st.pop();
				sum = sum + st.size();
			}
			else if (tmp == ')'){
				st.pop();
				sum++;

			}
		}
		tmp = s[i];
	
	}
	cout << sum;
	return 0;
}