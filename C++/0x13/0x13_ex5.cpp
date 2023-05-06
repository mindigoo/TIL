// https://www.acmicpc.net/problem/1654
// 1654. ���� �ڸ���

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int k, n;
int arr[10005];

bool solve(ll x){
    ll cur = 0;
    for(int i = 0; i < k; i++) cur += arr[i] / x;
    return cur >= n;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> k >> n;
    
    for(int i=0; i < k; i++) cin >> arr[i];

    ll st = 1;
    ll en = 0x7fffffff; // 2^31 - 1

    while(st < en){
        ll mid = (st+en+1)/2;

        if(solve(mid)) st = mid;
        else en = mid-1;
    }
    cout << st;
}

// Parametric Search : ������ �����ϴ� �ּ�/�ִ��� ���ϴ� ����(����ȭ ����)�� ���� ������ ��ȯ�� �̺� Ž���� �����ϴ� ���

// (����ȭ ����) N���� ���� �� �ִ� ������ �ִ� ����
// (���� ����) ������ ���̰� X �� �� ������ N�� �̻��ΰ� �ƴѰ�? -> �̺� Ž���� �����Լ�, �����Լ��� ���

// O(log(2^31)K) = O(31K)

// mid = (st+en)/2 �ϸ� ���� ������ ����