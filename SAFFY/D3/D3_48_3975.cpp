// 3975

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
        
        int Ax, Ay, Bx, By;
        cin >> Ax >> Ay >> Bx >> By;

        string ans;
        if(Ax*By > Bx*Ay){
            ans = "ALICE";
        }
        else if(Ax*By < Bx*Ay){
            ans = "BOB";
        }
        else{
            ans = "DRAW";
        }

        cout << "#" << tc << " " << ans << "\n";
    }

    return 0;
}
