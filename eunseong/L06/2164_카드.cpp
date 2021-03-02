#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> QQ;

    int n;
    cin >> n;

    for(int i=1; i<=n; i++) QQ.push(i);

    while(QQ.size() != 1){
        QQ.pop();
        int a = QQ.front();
        QQ.pop();
        QQ.push(a);
    }
    cout << QQ.front();
}