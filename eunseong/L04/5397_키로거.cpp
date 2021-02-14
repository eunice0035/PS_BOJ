#include <bits/stdc++.h>
using namespace std;

string keylogger(string a){

    list<char> L;
    auto cur = L.begin();
    string ans ="";
    
    for(auto c : a) {

        if(c == '<'){
            if(cur != L.begin()) cur--;
        }

        else if(c == '>'){
            if(cur != L.end()) cur++;
        }

        else if(c == '-'){
            if(cur != L.begin()){ 
                cur--;
                cur = L.erase(cur);
            }
        }
        
        else{
            L.insert(cur,c);
        }
    }

    for(auto c : L) ans +=c;
    return ans;
}

int main(void){

    int n;
    cin >> n;

    while(n--){
        string a;
        cin >> a;
        cout << keylogger(a) <<'\n';
    }    
}