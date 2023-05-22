// 5688

#include<bits/stdc++.h>

using namespace std;

long long arr[1000005];

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(long long i=1; i<=1000000; i++){
        arr[i] = i*i*i;
    }

    for(int tc = 1; tc <= T; tc++){

        long long n;
        cin >> n;

        int result = -1;
        for(int i=1; i<=1000000; i++){
            if(arr[i] == n){
                result = i;
                break;
            }
        }

        cout << "#" << tc << " ";
        cout << result;
        cout << "\n";
    }

    return 0;
}

