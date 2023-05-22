// 14413

#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>
#include<queue>

#define X first
#define Y second

using namespace std;

char board[55][55];

deque<pair<int, int>> v;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int n, m;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++)
	{
		cin >> n >> m;

		memset(board, 0, sizeof(board));

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> board[i][j];

				if (board[i][j] == '.' || board[i][j] == '#') {
					v.push_back({ i,j });
				}
			}
		}


		bool flag = false;
		string ans = "possible";

		while (!v.empty()) {
			auto cur = v.front();
			v.pop_front();

			for (int i = 0; i < 4; i++) {
				int mx = cur.X + dx[i];
				int my = cur.Y + dy[i];

				if (mx < 0 || my < 0 || mx >= n || my >= m) continue;
				if (board[cur.X][cur.Y] == board[mx][my]) {
					flag = true;
					break;
				}

				if (board[mx][my] != '?') continue;
				else {
					if (board[cur.X][cur.Y] == '.') {
						board[mx][my] = '#';
						v.push_back({ mx,my });
					}
					else {
						board[mx][my] = '.';
						v.push_back({ mx, my });
					}
				}

			}

			if (flag == true) {
				ans = "impossible";
				break;
			}
		}
		cout << "#" << tc << " " << ans << "\n";
	}

	return 0;
}