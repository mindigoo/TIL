// 3431

#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>

#define X first
#define Y second

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++){

        int L, U, X;
        cin >> L >> U >> X;

        int ans = 0;

        if(L <= X && X <= U){
            ans = 0;
        }
        else if(U < X){
            ans = -1;
        }
        else if(X < L){
            ans = L - X;
        }

        cout << "#" << tc << " " << ans << "\n";
    }

    return 0;
}
