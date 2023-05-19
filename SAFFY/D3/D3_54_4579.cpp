// 4579

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
        
        string s;
        cin >> s;

        bool flag = 0;
        bool pass = 0;
        for(int i=0; i < s.length()/2; i++){
            if(s[i] == '*'){
                pass = 1;
                continue;
            }
            if(s[s.length()-i-1] == '*'){
                pass = 1;
                continue;
            }

            if(pass == 1) continue;

            if(s[i] != s[s.length()-1 - i]){
                flag = 1;                
            }
        }

        string ans = "Exist";
        if(flag == 1) ans = "Not exist";

        cout << "#" << tc << " " << ans << "\n";
    }

    return 0;
}
