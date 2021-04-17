#include <bits/stdc++.h>
using namespace std;

int board[102][102][102];
int dist[102][102][102];
int dx[6] ={1,0,0,-1,0,0};
int dy[6] ={0,1,0,0,-1,0};
int dz[6] ={0,0,1,0,0,-1};

int main(void){

    //col = m, row=n
    int row,col,high;
    cin >> col >> row >> high;
    
    queue< pair<pair<int,int>,int>> Q;
    bool flag = false;

    for(int z=0; z<high; z++){
        for(int x=0; x<row; x++){
            for(int y=0; y<col; y++){
                cin >> board[x][y][z];
                dist[x][y][z] = -1;
                if(board[x][y][z] == 1){
                    dist[x][y][z] = 1;
                    pair<pair<int,int>, int> temp;
                    temp = {{x,y},z};
                    Q.push(temp);
                }
                if(board[x][y][z] == 0) flag= true;

            }
        }
    }

    if(flag == false){
        cout << 0; return 0;
    }

    while(!Q.empty()){
        pair<pair<int,int>, int> cur = Q.front();
        Q.pop();
        for(int i=0; i<6; i++){
            int nx = cur.first.first + dx[i];
            int ny = cur.first.second + dy[i];
            int nz = cur.second + dz[i];

            if(nx <0 || nx >=row || ny<0 || ny>=col || nz<0 || nz>=high) continue;
            if(board[nx][ny][nz] == 0 && dist[nx][ny][nz] == -1){
                board[nx][ny][nz] = 1;
                dist[nx][ny][nz] = dist[cur.first.first][cur.first.second][cur.second]+1;
                Q.push({{nx,ny},nz});
            }
        }
    }
    int day = 0;
    for(int z=0; z<high; z++){
        for(int y=0; y<col; y++){
            for(int x=0; x<row; x++){
                if(board[x][y][z] != -1 && dist[x][y][z] == -1){
                    cout << -1;
                    return 0;
                }
                day = max(day, dist[x][y][z]);
            }
        }
    }
    cout << day-1;
}