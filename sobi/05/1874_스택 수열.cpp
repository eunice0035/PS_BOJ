#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	int a;
	int *arr = new int[n];
	for (int i = 0; i < n; i++){
		cin >> a;
		arr[i] = a;
	}
	char* result = new char[200000];
	stack<int> st;
	int num = 1;
	int pt = 0;
	int rept = 0;
	int recent = 0;
	while (pt<n) {
		if (arr[pt] > recent) {
			st.push(num);
			result[rept] = '+';
			rept++;
			if (arr[pt] == num) {
				recent = arr[pt];
				result[rept] = '-';
				rept++;
				st.pop();
				pt++;
				num++;
			}
			else {
				num++;
			}
		}
		else
			if (arr[pt] == st.top()) {
				recent = st.top();
				result[rept] = '-';
				rept++;
				st.pop();
				pt++;
			}
			else {
				cout << "NO\n";
				return 0;
			}
	}
	for (int i = 0; i < rept; i++)
		cout << result[i] << "\n";

	return 0;
}