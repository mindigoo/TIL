// 4466

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

        bool flag = 0;
        for(int i = 0; i < str.length()/2; i++){
            if(str[i] == '?') continue;
            if(str[str.length()-1 - i] == '?') continue;
            if(str[i] != str[str.length()-1 - i]){
                flag = 1;
                break;
            }
        }

        string ans = "Exist";
        if(flag == 1) ans = "Not exist";

        cout << "#" << tc << " " << ans << "\n";
    }

    return 0;
}
