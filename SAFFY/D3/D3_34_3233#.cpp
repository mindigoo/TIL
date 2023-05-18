// 3233

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
 
        int A, B;
        cin >> A >> B;
 
        long long ans = (A/B) * (A/B);
 
        cout << "#" << tc << " " << ans << "\n";
    }
 
    return 0;
}