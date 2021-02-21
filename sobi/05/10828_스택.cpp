#include <iostream>
#include <stack>
using namespace std;


int main(void) {

	int n;
	cin >> n;

	stack<int> st;

	for (int i = 0; i < n; i++) {
		string s;
		int a;
		cin >> s;
		if (s == "push") {
			cin >> a;
			st.push(a);
		}
		else if (s == "pop") {
			if (st.empty()) {
				cout << "-1\n";
			}
			else {
				cout << st.top() << "\n";
				st.pop();
			}
		}
		else if (s == "size") {
			cout << st.size() << "\n";
		}
		else if (s == "empty") {
			if (st.size() == 0)
				cout << "1\n";
			else
				cout << "0\n";
		}
		else if (s == "top") {
			if (st.empty()) {
				cout << "-1\n";
			}
			else
				cout << st.top() << "\n";

		}
		//cout << s<<"\n";
	}


	return 0;
}