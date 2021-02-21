#include <bits/stdc++.h>
using namespace std;

int main(void){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    stack<pair<int,int>> SS;
    
    for(int i=0; i<n; i++){
        int height;
        cin >> height;

        while(!SS.empty()){
            if(height < SS.top().second){
                cout << SS.top().first << " ";
                break;
            }
            SS.pop();
        }
        if(SS.empty()) cout << 0 << " ";
        SS.push({i+1, height});
    }
}