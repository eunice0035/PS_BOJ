#include<iostream>
#include<queue>

using namespace std;

#define x first
#define y second
int board[502][502];
bool vis[502][502];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main(void) {
	queue < pair<int, int> > q;
	int n, m;
	cin >> n >> m;
	int count = 0, max = 0;
	int pics = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (vis[i][j] != 1 && board[i][j] == 1) {
				pics++;
				vis[i][j] = 1;
				q.push({ i,j });
				count++;

				while (!q.empty()) {
					pair<int, int> cur = q.front();
					q.pop();
					for (int dir = 0; dir < 4; dir++) {
						int nx = cur.x + dx[dir];
						int ny = cur.y + dy[dir];
						if (nx < 0 || nx >= n || ny < 0 || ny >= m)
							continue;
						if (vis[nx][ny] || board[nx][ny] != 1) 
							continue;
						vis[nx][ny] = 1;
						q.push({ nx, ny });
						count++;
					}
				}
				if (max < count) {
					max = count;
				}
				count = 0;

			}
		}
	}
	
	cout << pics << "\n" << max;

	return 0;
}
