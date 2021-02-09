#include <bits/stdc++.h>
using namespace std;

int main(void){
    int num, tar, cnt =0;
    cin >> num;
    
    int arr[num];
    for(int i=0; i<num; i++) cin >> arr[i];
    
    cin >> tar;

    for(auto i : arr){
        if(i == tar) cnt++;
    }

    cout << cnt;
}