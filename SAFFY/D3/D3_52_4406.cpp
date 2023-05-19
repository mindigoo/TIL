// 4406

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

        string ans = "";

        for(int i=0; i < s.length(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                continue;
            }
            ans += s[i];
        }

        cout << "#" << tc << " " << ans << "\n";
    }

    return 0;
}
