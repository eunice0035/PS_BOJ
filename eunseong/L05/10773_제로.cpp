#include <bits/stdc++.h>
using namespace std;

int main(void){

    stack<int> SS;

    int n;
    cin >> n;
    int sum = 0;

    while(n--){
        int k;
        cin >> k;
        if(k != 0 ){
            SS.push(k);
            sum += k;
        }
        if(k == 0){
            if(!SS.empty()){
                sum -= SS.top();
                SS.pop();
            }
        }

    }
    cout << sum;
}