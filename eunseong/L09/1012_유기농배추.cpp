#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int bfs(int row, int col, int k){
    int board[52][52];
    int vis[52][52];
    int ans = 0;

    for(int i=0; i<row; i++){
        fill(board[i], board[i]+col, 0);
        fill(vis[i], vis[i]+col, 0);
    }

    for(int i=0; i<k; i++){
        int x, y;
        cin >> y >> x;
        board[x][y] = 1;
    }


    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(board[i][j] == 1 && vis[i][j] == 0){
                ans++;
                queue< pair<int,int> > Q;
                Q.push({i,j});
                vis[i][j] = 1;
                while(!Q.empty()){
                    pair<int,int> cur = Q.front();
                    Q.pop();
                    
                    for(int i=0; i<4; i++){
                        int nx = cur.first+dx[i];
                        int ny = cur.second+dy[i];

                        if(nx <0 || nx>=row || ny <0 || ny >= col) continue;
                        if(board[nx][ny] == 0 || vis[nx][ny] == 1) continue;
                        vis[nx][ny] = 1;
                        Q.push({nx,ny});
                    }
                }
            }
        }
    }
    return ans;
}

int main(void){
    int tc;
    cin >> tc;

    for(int i=0; i<tc; i++){
        int row,col,K;
        cin >> col >> row >> K;
        cout << bfs(row,col, K) <<'\n';
    }
}