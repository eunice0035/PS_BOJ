#include <bits/stdc++.h>
using namespace std;

int main(void){

    cin.tie(0);
    ios::sync_with_stdio(0);

    while (true){
        string sen;
        getline(cin, sen);
        if(sen == ".") break;

        stack<char> SS;
        int flag = 0;

        for (auto c : sen){

            if (c == '[' || c == '(') SS.push(c);
            else if (c == ']'){
                if (SS.empty() || SS.top() != '['){
                    flag = 1;
                    break;
                }
                SS.pop();
            }         

            else if (c == ')'){
                if (SS.empty() || SS.top() != '('){
                    flag=1;
                    break;
                }
                SS.pop();
            }
        }
        if (!SS.empty()) flag = 1;
        if(flag==0) cout << "yes\n";
        else cout << "no\n";
    }
}