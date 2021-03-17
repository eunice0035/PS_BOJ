#include <bits/stdc++.h>
using namespace std;


int board[501][501];
bool vis[501][501];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

int main(void){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
	int a, b;
	cin >> a >> b;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> board[i][j];
		}
	}
	
    queue<pair<int,int>> Q;
	int count = 0;
	int max = 0;
	int area = 0;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (board[i][j] == 1 && vis[i][j] == false) {
				Q.push({ i, j });
				vis[i][j] = true;
				count++;
			}

			while (!Q.empty()) {
				q = Q.front();
				Q.pop();

                area++;
                int x = q.front().first;
                int y = q.front().second;
				
				for (int k = 0; k < 4; k++) {
                    int nx = x + dx[i];
                    int ny = y + dy[i];
					
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
					if (board[nx][ny] == 1 && vis[nx][ny] == false) {
						Q.push({nx,ny});
						vis[nx][ny] = true;
					}
				}
			}
			if (max < area) {
				max = area;
			}
			area = 0;


		}
	}
	cout << count << endl << max;
    
}