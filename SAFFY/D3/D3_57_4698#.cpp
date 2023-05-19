// 4698

#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>

using namespace std;

// vector<bool> arr(1000005, 0);
bool arr[1000005];

void func(){
    arr[0] = 1;
    arr[1] = 1;
    for(int i = 2; i*i <= 1000000; i++){
        if(!arr[i]){
            for(int j = i*2; j <= 1000000; j+=i){
                arr[j] = 1;
            }
        }
    }
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    func();

    for(int tc = 1; tc <= T; tc++){
        
        string d;
        int st, ed;
        cin >> d >> st >> ed;

        int ans = 0;
        for(int i=st; i<=ed; i++){
            if(!arr[i]){
                string s = to_string(i);
                if(s.find(d) != string::npos){
                    ans++;
                }
            }
        }

        cout << "#" << tc << " " << ans << "\n";
    }
    return 0;
}