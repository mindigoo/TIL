// 5515

#include<bits/stdc++.h>

using namespace std;

int month[15] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){


    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++){

        int m, d;
        cin >> m >> d;

        int start_week = 3;
    
        int sum = d + start_week;
        for(int i=1; i<m; i++){
            sum += month[i];
        }

        int result_week = sum % 7;

        cout << "#" << tc << " ";
        cout << result_week;
        cout << "\n";
    }

    return 0;
}