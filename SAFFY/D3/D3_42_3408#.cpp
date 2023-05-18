// 3408

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

        unsigned long long n;
        cin >> n;

        unsigned long long s_sum, s_odd, s_even;

        s_sum = (n * (n+1)) / 2;

        s_even = s_sum * 2;
        s_odd = s_even - n;

        cout << "#" << tc << " " << s_sum << " " << s_odd << " " << s_even << "\n";
    }

    return 0;
}
