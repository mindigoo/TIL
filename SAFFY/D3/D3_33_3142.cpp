// 3142

#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>
#include<queue>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int tc=1; tc <= T; tc++){

        int N, M;
        cin >> N >> M;

        int x = (2*M) - N;
        int y = N - M;


        cout << "#" << tc << " " << x << " " << y << "\n";
    }

    return 0;
}