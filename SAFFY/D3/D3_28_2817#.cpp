// 2817

#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>
#include<queue>

using namespace std;

int N, K;
int ans;
int board[25];
int vis[25];

void func(int cur, int sum){
	if(cur == N){
		if(sum == K) ans++;
		return;
	}

	func(cur+1, sum);
	func(cur+1, sum + board[cur]);
}

int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for(int test_case = 1; test_case <= T; test_case++){
		
		cin >> N >> K;

		memset(board, 0, sizeof(board));
		memset(vis, 0, sizeof(vis));
		ans = 0;
		
		for(int i = 0; i < N; i++){
			cin >> board[i]; 
		}

		sort(board, board+N);

		func(0,0);

		cout << "#" << test_case << " " << ans << "\n";
	}

	return 0;
}