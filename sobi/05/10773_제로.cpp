#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	stack<long long> st;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a == 0) {
			if(st.empty()==0)
			st.pop();
		}
		else {
			st.push(a);
		}
	}
	int sum = 0;
	//������ �̻���
	//21 1 1 1 0 0 1 1 1 1 0 0 0 0 0 0 1 1 1 1 1 1�̰� �־ 6���;���
	int size = st.size();
	if (st.empty() == 0) {
		
		for (int i = 0; i < size; i++) {
			sum = sum + st.top();
			st.pop();
		}
	}
	cout << sum << "\n";


	return 0;
}