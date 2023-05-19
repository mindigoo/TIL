// 5162

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

        int a, b, c;
        cin >> a >> b >> c;

        int sum = 0;
        if(a > b){
            sum = c / b;
        }
        else sum = c / a;

        cout << "#" << tc << " " << sum << "\n";
        
    }
    return 0;
}