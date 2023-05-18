// 2930

#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>
#include<queue>

using namespace std;

int N;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for(int tc = 1; tc <= T; tc++){

		priority_queue<int> pq;
		
		deque<int> ans;

		cin >> N;

		int num;
		for(int i=0; i< N; i++){
		
			cin >> num;

			if(num == 1){
				int x;
				cin >> x;
				pq.push(x);
			}
			else if(num == 2){
				if(pq.empty())
					ans.push_back(-1);
				else{
					ans.push_back(pq.top());
					pq.pop();
				}
			}
		}

		cout << "#" << tc << " ";
		while(!ans.empty()){
			cout << ans.front() << " ";
			ans.pop_front();
		}
		cout << "\n";


	}

	return 0;
}