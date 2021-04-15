#include <bits/stdc++.h>
using namespace std;

int r,c;
char board[1002][1002];
int distF[1002][1002];
int distJ[1002][1002];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(void){

    cin >> r >> c;

    queue< pair<int,int> > FQ;
    queue< pair<int,int> > JQ;
    
    for(int i=0; i<r; i++){
        fill(distF[i], distF[i]+c,-1);
        fill(distJ[i], distJ[i]+c, -1);
    }
    
    for(int i=0; i<r; i++){
        string a;
        cin >> a;
        for(int j=0; j<c; j++){
            board[i][j] = a[j];
            if(board[i][j] == 'J'){
                JQ.push({i,j});
                distJ[i][j] = 0;
            }
            if(board[i][j] == 'F'){
                FQ.push({i,j});
                distF[i][j] = 0;
            }
        }
    }
    //input end

    while(!FQ.empty()){
        pair<int, int> cur = FQ.front();
        FQ.pop();

        for(int i=0; i<4; i++){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];

            if(nx <0 || nx>=r || ny <0 || ny>=c) continue;
            if(distF[nx][ny] >= 0 || board[nx][ny] == '#' ) continue;
            distF[nx][ny] = distF[cur.first][cur.second] + 1;
            FQ.push({nx,ny});
        }
    }

    while(!JQ.empty()){
        pair<int,int> cur = JQ.front();
        JQ.pop();

        for(int i =0; i<4; i++){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];

            if(nx <0 || nx>=r || ny <0 || ny >= c){
                cout << distJ[cur.first][cur.second]+1;
                return 0;
            }
            if(distJ[nx][ny] >= 0 || board[nx][ny] == '#') continue;
            if(distF[nx][ny] != -1 && distF[nx][ny] <= distJ[cur.first][cur.second]+1) continue;
            distJ[nx][ny] = distJ[cur.first][cur.second]+1;
            JQ.push({nx,ny});
        }
    }
    cout << "IMPOSSIBLE";
}