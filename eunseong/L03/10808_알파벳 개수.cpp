#include <bits/stdc++.h>
using namespace std;

int func2(int arr[], int N){

    int check[101] = {0,};

    for(int i=0; i<N; i++){
        check[arr[i]]++;
    }

    for(int i=0; i<N; i++){
        
        if( check[100-arr[i]] == 1) return 1;
    }
    return 0;
}

int main(void){

    string s;
    cin >> s;

    int cnt[26] = {0,};

    //for(auto c : s) 해도 됨
    for(int i=0; i<s.length(); i++){
        cnt[s[i] -'a']++;
    }

    for(int i=0; i<26; i++)
        cout << cnt[i] << ' ';

}