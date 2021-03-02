#include <bits/stdc++.h>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    while(n--){
        string sen;
        cin >> sen;

        stack<char> SS;
        int vaild = 1;

        for(auto c : sen){
            if(c == '(') SS.push(c);
            else if(c == ')'){
                
                if(SS.empty() || SS.top() != '('){
                    vaild = 0;
                    break;
                }
                SS.pop();
            }
        }

        if(!SS.empty()) vaild=0;
        if(vaild == 0) cout << "NO\n";
        else cout << "YES\n";
    }

}