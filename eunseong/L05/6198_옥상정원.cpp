#include <bits/stdc++.h>
using namespace std;


int main(){

	cin.tie(0);
    ios_base::sync_with_stdio(0); 
    
	int n; 
    cin >> n;
    stack<int> s;
    int v[n];

	for(int i=0; i<n; i++) cin >> v[i];

	long long ans = 0;
	for(int i=0; i<n; i++){
		while(!s.empty() && s.top() <= v[i]) s.pop();
		ans += (long long)s.size();
		s.push(v[i]);
	}
	cout << ans;
}