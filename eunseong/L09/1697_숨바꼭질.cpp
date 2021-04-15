#include <bits/stdc++.h>
using namespace std;

int dist[100002] = {-1,};
int main(void){
    queue<int> Q;
    int n,k;
    cin >> n >> k;
    fill(dist, dist+100001,-1);
    Q.push(n);
    dist[n] = 0;

    while(dist[k]==-1){
        int cur = Q.front();
        Q.pop();

        for(int nxt : {cur-1, cur+1, 2*cur}){
            if(nxt <0 || nxt >  100000) continue;
            if(dist[nxt] != -1) continue;
            dist[nxt] = dist[cur]+1;
            Q.push(nxt);
        }
    }
    cout << dist[k];
}