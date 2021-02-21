#include <bits/stdc++.h>
using namespace std;

int main(void){
    
    stack<int> s;
	vector<int> sol;
    vector<char> v;

    int num;
	cin >> num;
	
	for (int i = 0; i < num; i++) {
        int data;
		cin >> data;
		sol.push_back(data);
	}

	int idx = 0;
	for (int i = 1; i <= num; i++) {
		s.push(i);
		v.push_back('+');

		while (!s.empty()) {
			if (sol[idx] == s.top()) {
				s.pop();
				v.push_back('-');
				idx++;
			}
			else break;
		}
	}

	if (s.empty()) {
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << "\n";
		}
	}
	else cout << "NO" << "\n";
	return 0;
}