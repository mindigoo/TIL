// https://www.acmicpc.net/problem/2457
// 2457번. 공주님의 정원

#include<bits/stdc++.h>

using namespace std;

int arr[1005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }

    sort(arr, arr+num);

    int sum = 0;
    for(int i = 0; i < num; i++){
        sum += arr[i] * (num-i);
    }

    cout << sum << "\n";
}