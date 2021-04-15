#include <bits/stdc++.h>
using namespace std;

int n,m;
int toma[1002][1002];
int dist[1002][1002];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    cin >> m >> n;
    queue<pair<int,int>> Q;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> toma[i][j];
            if(toma[i][j]==1) Q.push({i,j});
            if(toma[i][j]==0) dist[i][j] = -1;
        }
    }

    while(!Q.empty()){
        pair<int,int> cur = Q.front();
        Q.pop();
        for(int i=0; i<4; i++){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            
            if(nx<0 || nx>=n || ny <0 || ny>=m) continue;
            if(dist[nx][ny] >= 0) continue;
            toma[nx][ny] = 1;
            dist[nx][ny] = dist[cur.first][cur.second] + 1;
            Q.push({nx,ny});
        }
    }

    int day = 0;
    for(int i=0; i<n; i++){
        for(int j =0; j<m; j++){
            if(dist[i][j] == -1){
                cout << -1;
                return 0;
            }
            day = max(day,dist[i][j]);
        }
    }
    cout << day;
}