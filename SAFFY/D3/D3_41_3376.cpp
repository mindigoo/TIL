// 3376

#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>

#define X first
#define Y second

using namespace std;

long long arr[105];

void func(){

    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;
    arr[4] = 2;
    arr[5] = 2;
    
    for(int i=6; i <= 101; i++){
        arr[i] = arr[i-1] + arr[i-5];
    }

    return;
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    func();

    for(int tc = 1; tc <= T; tc++){
        
        int n;
        cin >> n;

        cout << "#" << tc << " " << arr[n] << "\n";
    }

    return 0;
}
