// https://www.acmicpc.net/problem/15683
// 15683번. 감시

// 백트래킹.ver -> X
#include<bits/stdc++.h>

#define X first 
#define Y second

using namespace std;

int min_cnt=0;
int width, height;
int user_arr[10][10];
vector<pair<int,int>> CCTV_arr; 
vector<int> CCTV_cnt_arr;

// 방 정보 저장
void UserInputuser_arr(int x, int y){
    cin >> user_arr[x][y];
    return;
}

// 값 입력 받기
void UserInput(){ 
    cin >> height >> width ; // 방 가로, 세로 값
    
    for(int i=0; i<height; i++){
        for(int j=0; j<width; j++){
            UserInputuser_arr(i,j);
        }
    }
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    UserInput();
}