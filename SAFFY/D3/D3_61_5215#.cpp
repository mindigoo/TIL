// 5215

#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>

#define X first
#define Y second

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    
    for(int tc = 1; tc <= t; tc++)
    {
        int N, L;
        int dp[21][10001];
        int w[21], v[21];
        
        cin >> N >> L;
        
        for(int i = 1; i <= N; i++)
            cin >> v[i] >> w[i];
        
        for(int i = 1; i <= N; i++)
        {
            for(int j = 1; j <= L; j++)
            {
                if(w[i] > j)
                    dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] = max(v[i] + dp[i - 1][j - w[i]], dp[i -1][j]);
            }
        }
        cout << "#" << tc << " " << dp[N][L] << endl;
    }
    return 0;
}

/*
#define X first
#define Y second

using namespace std;

vector<pair<int,int>> v;
vector<pair<int,int>> ans;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++){

        int n, kal;
        cin >> n >> kal;

        v.clear();
        ans.clear();

        int x, y;
        for(int i = 0; i < n; i++){
            cin >> x >> y;
            v.push_back({x,y});
        }

        int max_score = 0;
        
        for(int i = 0; i < n; i++){
            int score = v[i].X;
            int k = v[i].Y;
            for(int j = 0; j < i; j++){
                if(v[i].Y + ans[j].Y < kal){
                    if(v[i].X + ans[j].X > score){
                        score = v[i].X + ans[j].X;
                        k = v[i].Y + ans[j].Y;
                    }
                }
            }
            ans.push_back({score, k});
            
            max_score = max(max_score, score);
        }

        cout << "#" << tc << " " << max_score << "\n";        
    }
    return 0;
}
*/