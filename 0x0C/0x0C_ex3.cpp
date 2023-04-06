// https://www.acmicpc.net/problem/1182
// 부분수열의 합

#include<bits/stdc++.h>

using namespace std;

int N, S, cnt=0;
int arr[25];

void func(int cur, int sum){ 
    if(cur == N){
        if(sum == S) cnt++;
        return;
    }

    func(cur+1, sum); // 현재 수를 더함
    func(cur+1, sum+arr[cur]);  // 현재 수를 더하지 않음
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> S;
    for(int i=0; i < N; i++) cin >> arr[i];

    func(0, 0); 

    if(S == 0) cnt--; // 공집합 제외(양수 집합만 허용)
    cout << cnt;
}


/*
- 원소 n개 집합, 부분집합 2^n개
*/


// https://cplusplus.com/reference/algorithm/next_permutation/