// 4299

#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++){

        int D, H, M;
        cin >> D >> H >> M;

        int sum;

        sum = (D - 11) * 24 * 60 + (H - 11) * 60 + (M - 11);

        cout << "#" << tc << " ";
        if(sum < 0) cout << -1 << "\n";
        else cout << sum << "\n";
    }

    return 0;
}
