// 2814

#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>

using namespace std;

int N, M;
int ans;
int board[15][15];
int vis[15];

void bfs(int num, int current){

	if(ans < current) ans = current;

	for(int i = 1; i <= N; i++){
		if(board[num][i] && !vis[i]){
			vis[i] = 1;
			bfs(i, current+1);
			vis[i] = 0;
		}
	}
}

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for(int test_case = 1; test_case <= T; test_case++){

		cin >> N >> M;

		memset(board, 0, sizeof(board));
		memset(vis, 0, sizeof(vis));
		ans = 0;

		int x, y;
		for(int i = 0; i < M; i++){
			cin >> x >> y;
			board[x][y] = 1;
			board[y][x] = 1;
		}

		for(int i = 1; i <= N; i++){
			vis[i] = 1;
			bfs(i, 1);
			vis[i] = 0;
		}

		cout << "#" << test_case << " " << ans << "\n";
	}
}