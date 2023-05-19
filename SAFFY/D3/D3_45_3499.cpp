// 3499

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

        int ans = 0;

        int len;
        cin >> len;

        string s[1005];

        for(int i=0; i<len; i++){
            cin >> s[i];
        }


        cout << "#" << tc << " ";
        if(len % 2 == 0){
            for(int i=0; i<len/2; i++){
                cout << s[i] << " " << s[len/2+i] << " ";
            }
        }
        else{
            for(int i=0; i<len/2; i++){
                cout << s[i] << " " << s[len/2+1+i] << " ";
            }
            if(len % 2 == 1) cout << s[len/2];
        }  
        cout << "\n";
    }

    return 0;
}
