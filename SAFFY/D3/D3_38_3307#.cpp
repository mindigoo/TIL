// 3307

#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>

#define X first
#define Y second

using namespace std;

int arr[1005];

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++){

        int n;
        cin >> n;

        memset(arr, 0, sizeof(arr));

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        
        vector<pair<int,int>> result;

        int ans = 0;

        result.push_back({arr[0], 1});
        for(int i=1; i<n; i++){
            int n = 1;
            for(int j=0; j < i; j++){
                if(result[j].X < arr[i]){
                    n = max(result[j].Y + 1, n);
                }
            }
            result.push_back({arr[i], n});

            ans = max(ans, n);
        }

        cout << "#" << tc << " " << ans << "\n";
    }

    return 0;
}
