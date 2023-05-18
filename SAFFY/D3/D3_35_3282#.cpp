// 3233

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

pair<int, int> arr[105];
int ans[105][1005];

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int tc=1; tc <= T; tc++){

        int N, V;
        cin >> N >> V;

        memset(arr, 0, sizeof(arr));
        memset(ans, 0, sizeof(ans));
        
        int x,y;
        for(int i = 1; i <= N; i++){
            cin >> x >> y;
            arr[i] = {x,y};
        }

        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= V; j++){
                if(arr[i].X > j){
                    ans[i][j] = ans[i-1][j];
                }
                else{
                    ans[i][j] = max(arr[i].Y + ans[i-1][j-arr[i].X], ans[i-1][j]);
                }
            }
        }

        cout << "#" << tc << " " << ans[N][V] << "\n";
    }

    return 0;
}