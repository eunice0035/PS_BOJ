#include <bits/stdc++.h>
using namespace std;

string check(string a, string b){

    int al[26] ={0,};
    int bl[26] ={0,};
 
    if(a.length() != b.length()) return "Impossible";

    for(int i=0; i<a.length(); i++){
        al[a[i] - 'a']++;
        bl[b[i] - 'a']++;
    }

    for(int i=0; i<26; i++){
        if(al[i] != bl[i]) return "Impossible";
    }

    return "Possible";
}

int main(void){

    int N;
    cin >> N;

    string a,b;

    for(int i=0; i<N; i++){
        cin >> a >> b;
        cout << check(a,b) << '\n';
    }
}