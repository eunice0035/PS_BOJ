#include <bits/stdc++.h>
using namespace std;

int main(void){
    
    int n =0;
    while(1){
        n++;
        string a;
        cin >> a;

        if(a[0] =='-') break;

        int left =0, cnt=0;
        stack<char> ss;

        for(auto c : a){
            if(c == '{'){
                ss.push(c);
                left++;
            }
            else if( c == '}'){
                if(!ss.empty() && ss.top() == '{'){
                    ss.pop();
                    left--;
                }
                else if(ss.empty()){
                    ss.push('{');
                    cnt++;
                    left++;
                }
            }
        }
        cout << n<<". " << cnt+(left/2) << "\n";     
    }

}