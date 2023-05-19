// 4789

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
        
        string str;
        cin >> str;

        int ans = 0;
        int sum = 0;
        for(int i = 0; i < str.size(); i++){
            if(i > sum){
                ans += (i-sum);
                sum += (i-sum);
            }
            sum += (str[i] - '0');
        }

        cout << "#" << tc << " " << ans << "\n";
    }
    return 0;
}