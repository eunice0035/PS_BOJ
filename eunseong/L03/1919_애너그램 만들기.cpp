#include <bits/stdc++.h>
using namespace std;

int main(void){

    int str_a[26] ={0,};
    int str_b[26] ={0,};
    
    string a,b;
    cin >> a >> b;

    int sum = 0;

    for(int i=0; i<a.length(); i++){
        str_a[a[i]-'a']++;
    }

    for(int i=0; i<b.length(); i++){
        str_b[b[i]-'a']++;
    }

    for(int i=0; i<26; i++){
        if(str_a[i] != str_b[i]){
            sum += abs(str_a[i]-str_b[i]);
        }
    }

    cout << sum;

}