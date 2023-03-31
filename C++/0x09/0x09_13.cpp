// https://www.acmicpc.net/problem/2573
// 2573번. 빙산

#include<bits/stdc++.h>

#define X first
#define Y second

using namespace std;

int board[305][305]; // 입력배열
int vit[305][305]; 

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> board[i][j];
        }
    }



}

