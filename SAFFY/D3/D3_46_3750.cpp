// 3750

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

        long long n;
        cin >> n;

        while(n >= 10){ 
            int sum = 0; 

            while(n > 0){ 
                sum += n % 10;
                n /= 10; 
            }

            n = sum; 
        }

        cout << "#" << tc << " " << n << "\n";
    }

    return 0;
}
