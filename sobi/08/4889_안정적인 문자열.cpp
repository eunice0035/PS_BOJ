#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(void) {
	string s = " ";
	stack<char> st;
	int count = 0;
	int n = 1;
	while (1) {
		getline(cin, s);
		if (s.back() == '-')
			break;
		else {
			while (1) {
				if (s.back() == '}') { 
					st.push(s.back());
					s.pop_back();
				}
				else if (s.back() == '{') { 
					if (st.empty()) { 
						count++;
						st.push('}');
						s.pop_back();
					}
					else if (st.top() == '}') { 
						st.pop();
						s.pop_back();
					}
				}
				if (s.size() == 0) {
					if (st.size() == 0)
						cout << n << ". " << count << "\n";
					else {
						count = count + st.size() / 2;
						cout << n << ". " << count << "\n";
					}
					break;
				}
			}
			while (st.size() > 0) {
				st.pop();
			}
			s.clear();
			count = 0;
			n++;

		}
	}
	return 0;
}