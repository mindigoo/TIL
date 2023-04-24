// https://www.acmicpc.net/problem/2579
// 2579��. ��� ������

#include <bits/stdc++.h>

using namespace std;

int stair[305];
int step[305][2]; 
int num;

void InputUserData(){
    cin >> num;
    for(int i=1; i <= num; i++) { cin >> stair[i]; }
}

void CalTable(){
    step[0][1] = step[0][2] = 0;
    step[1][1] = step[1][2] = stair[1];

    for(int i=2; i <= num; i++){
        step[i][1] = max(step[i-2][1], step[i-2][2]) + stair[i];
        step[i][2] = step[i-1][1] + stair[i];
    }
}

void OutputResultData(){
    cout << max(step[num][1], step[num][2]) << "\n";
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    InputUserData();
    CalTable();
    OutputResultData();
}

// ��Ʈ��ŷ (N��20������ ��� ����)


// DP
// D[i][j] : ������� j���� ����� �����ؼ� ��� i��° ��ܱ��� �ö��� �� ���� ���� �ִ� (i��° ��� �ʼ�)
// D[k][1] = k-1 ��° ����� ���� �ʰ� k-2 ��° ����� ��Ҵٴ� �ǹ�
