#include <bits/stdc++.h>
using namespace std;

int main() {

    /*
    모르겠어서 찾아봄, 다시풀어보기
    */

    cin.tie(0);
    ios::sync_with_stdio(0);

    string s; 
    cin >> s;
    
    stack<char> ss;
    int ans = 0, offset = 1;
    bool isRight = true;

    for (int i=0; i<s.length(); i++){
        char c = s[i];

        if (c == '('){ 
            offset *= 2; 
            ss.push('(');
        }
        
        else if (c == '['){ 
            offset *= 3;
            ss.push('[');
        }
        
        if (c == ')') {
            if (ss.empty() || ss.top() != '(') {
                isRight = false;
                break;
            }
            offset /= 2;
            
            if (i > 0 && s[i-1] == '(') {
                ans += offset * 2; 
            }
            ss.pop();
        }
        
        else if (c == ']') {
            if (ss.empty() || ss.top() != '[') {
                isRight = false;
                break;
            }
            offset /= 3;
            if (i > 0 && s[i-1] == '[') { 
                ans += offset * 3; 
            }
            ss.pop();
        }
    }
    
    if (!ss.empty()) {
        isRight = false;
    }

    if(isRight==0) cout << 0 <<'\n';
    else cout << ans << '\n';
}  