// https://www.acmicpc.net/problem/15657
// 15657��. N �� M (8)

#include<bits/stdc++.h>

using namespace std;

int N, M;
int user_arr[10];
int result_arr[10];

void func(int n){
    if(n==M){
        for(int i=0; i<M; i++) cout << result_arr[i] << " ";
        cout << "\n";
        return;
    }

    for(int i=0; i<N; i++){
        if(n > 0 && user_arr[i] < result_arr[n-1]) continue;
        result_arr[n] = user_arr[i];
        func(n+1);
    }
}

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    for(int i=0; i<N; i++) cin >> user_arr[i];
    sort(user_arr,user_arr+N);

    func(0);
}