// https://www.acmicpc.net/problem/1780
// 1780번. 종이의 개수

#include<bits/stdc++.h>

using namespace std;

int board[10000][10000];
int numcnt[3] = {0};

void CutPaper(int n){
    int change = 0;
    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            if(board[0][0] != board[i][j]){
                change = 1;
                break;
            }
        }
        if(change == 1) break;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for(int i; i < N; i++){
        for(int j; j < N; j++){
            cin >> board[i][j];  
        }
    }
}
