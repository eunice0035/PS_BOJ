#include<iostream>
#include<queue>

using namespace std;

#define x first
#define y second
int board[2000][2000];
int vis[2000][2000];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main(void) {
	queue < pair<int, int> > q;
	int n, m;
	cin >> m >> n;
	int max = 0;
	int count = 0;
	int q_count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (vis[i][j] == 0 && board[i][j] == 1) {
				vis[i][j] = 1;
				q.push({ i,j });
				q_count++;
			}
			else if (board[i][j] == -1) {
				count++;
			}
		}
	}
	while (!q.empty()) {
		pair<int, int> cur = q.front();
		q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.x + dx[dir];
			int ny = cur.y + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;
			if (vis[nx][ny] > 0 || board[nx][ny] == 1)
				continue;
			if (board[nx][ny] == -1) {
				vis[nx][ny] = -1;
				continue;
			}

			q.push({ nx, ny });
			q_count++;
			vis[nx][ny] = vis[cur.x][cur.y] + 1;
			if (max < vis[nx][ny]) {
				max = vis[nx][ny];
			}
		}
	}

	if (m * n != q_count + count) {
		cout << -1;
		return 0;
	}
	if (max == 0) {
		cout << max;
		return 0;
	}
	else
		cout << max - 1;

	return 0;
}
