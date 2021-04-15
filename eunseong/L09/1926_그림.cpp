#include <bits/stdc++.h>
using namespace std;

int board[502][502];
int vis[502][502];
int d_row[4] = {1,0,-1,0};
int d_col[4] = {0,1,0,-1};
int n,m;

int bfs(int x, int y){
    int size = 0;
    queue<pair<int,int>> Q;
    vis[x][y] = 1;
    Q.push({x,y});

    while(!Q.empty()){
        size++;
        pair<int,int> cur = Q.front();
        Q.pop();
        //cout << '(' << cur.first << ", " << cur.second << ") -> ";
        for(int i=0; i<4; i++){
            int row = cur.first + d_row[i];
            int col = cur.second + d_col[i];

            if(row < 0 || row >=n || col < 0 || col >= m) continue;
            if(vis[row][col] || board[row][col] != 1) continue;
            vis[row][col] = 1;
            Q.push({row,col});
        }
    }
    return size;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> sizeArr;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> board[i][j];
        }
    }
    
    int num_pic = 0;
    int mx = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(board[i][j] == 1 && vis[i][j] == 0){
                num_pic++;
                sizeArr.push_back(bfs(i,j));
                //cout << "cnt: " << num_pic << " size: " << sizeArr.back() << '\n';
            }
        }
    }

    if(sizeArr.size() != 0)
        mx = *max_element(sizeArr.begin(), sizeArr.end());
    
    cout << num_pic << '\n' << mx;
}