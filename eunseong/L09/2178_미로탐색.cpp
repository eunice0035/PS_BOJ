#include <bits/stdc++.h>
using namespace std;

int n, m;
char board[102][102]={'0',};
//(0,0)에서부터 이동거리 계산
int dis[102][102]={0,};
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(void){
    //input
    cin >>n >> m;
    for(int i=0; i<n; i++){
        string temp;
        cin >> temp;
        for(int j=0; j<m; j++)
            board[i][j] = temp[j];
    }

    queue<pair<int,int>> Q;
    dis[0][0] = 1;
    Q.push({0,0});

    while(!Q.empty()){
        pair<int,int> cur = Q.front();
        Q.pop();
        for(int i=0; i<4; i++){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if(nx < 0 || nx>=n || ny <0 || ny >=m) continue;
            if(board[nx][ny] == '0' || dis[nx][ny]> 0) continue;
            dis[nx][ny] = dis[cur.first][cur.second] + 1;
            Q.push({nx,ny});
        }
    }
    cout << dis[n-1][m-1];
}