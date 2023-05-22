// 5431

#include<bits/stdc++.h>

using namespace std;

int arr[100];

int main(){


    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++){

        int n, k;
        cin >> n >> k;

        memset(arr, 0, sizeof(arr));

        int num;
        for(int i=0; i<k; i++){
            cin >> num;
            arr[num] = 1;
        }

        cout << "#" << tc << " ";
        for(int i=1; i<=n; i++){
            if(!arr[i]){
                cout << i << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}