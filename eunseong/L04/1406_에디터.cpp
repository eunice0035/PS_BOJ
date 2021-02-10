#include <bits/stdc++.h>
using namespace std;

int main(void){

    list<char> L;

    string s;
    int n;
    cin >> s;
    cin >> n; 

    for(int i=0; i<s.length(); i++){
        L.push_back(s[i]);
    }

    auto t = L.end();

    for(int i=0; i<n; i++){
        char order, input;
        cin >> order;

        if(order == 'L'){
            if(t != L.begin()) t--;
        }

        if(order == 'D'){
            if(t != L.end()) t++;
        }

        if(order == 'B'){
            if(t != L.begin()){
                t--;
                t = L.erase(t);
            }
        }        
        if(order == 'P'){
            cin >> input;
            L.insert(t,input);
        }
    }

    for(auto c : L) cout << c;
}