// https://www.acmicpc.net/problem/1182
// �κм����� ��

#include<bits/stdc++.h>

using namespace std;

int N, S, cnt=0;
int arr[25];

void func(int cur, int sum){ 
    if(cur == N){
        if(sum == S) cnt++;
        return;
    }

    func(cur+1, sum); // ���� ���� ����
    func(cur+1, sum+arr[cur]);  // ���� ���� ������ ����
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> S;
    for(int i=0; i < N; i++) cin >> arr[i];

    func(0, 0); 

    if(S == 0) cnt--; // ������ ����(��� ���ո� ���)
    cout << cnt;
}


/*
- ���� n�� ����, �κ����� 2^n��
*/


// https://cplusplus.com/reference/algorithm/next_permutation/