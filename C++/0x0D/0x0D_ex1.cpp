// https://www.acmicpc.net/problem/15683
// 15683��. ����

// ��Ʈ��ŷ.ver -> X
#include<bits/stdc++.h>

#define X first 
#define Y second

using namespace std;

int min_cnt=0;
int width, height;
int user_arr[10][10];
vector<pair<int,int>> CCTV_arr; 
vector<int> CCTV_cnt_arr;

// �� ���� ����
void UserInputuser_arr(int x, int y){
    cin >> user_arr[x][y];
    return;
}
// CCTV ��ġ ����
void UserInputCCTV_arr(int x,int y){
    if(user_arr[x][y] != 0 && user_arr[x][y] != 6) 
        CCTV_arr.push_back({x,y});
    return;
}
// CCTV ȸ�� Ƚ�� ����
void UserInputCCTV_cnt_arr(int x, int y){
    if(user_arr[x][y] == 1) CCTV_cnt_arr.push_back(4);
    else if(user_arr[x][y] == 2) CCTV_cnt_arr.push_back(2);
    else if(user_arr[x][y] == 3) CCTV_cnt_arr.push_back(4);
    else if(user_arr[x][y] == 4) CCTV_cnt_arr.push_back(4);
    else if(user_arr[x][y] == 5) CCTV_cnt_arr.push_back(1);
    return ;
}
// �� �Է� �ޱ�
void UserInput(){ 
    cin >> height >> width ; // �� ����, ���� ��
    
    for(int i=0; i<height; i++){
        for(int j=0; j<width; j++){
            UserInputuser_arr(i,j);
            UserInputCCTV_arr(i,j);
            UserInputCCTV_cnt_arr(i,j);
        }
    }
}

// ���� ���� üũ
void DirectionN(int start_X, int start_Y){ 
    for(int i=start_X-1; i=0; i--){
        if(user_arr[i][start_Y] == 6) return; // �� �߽߰� ����
        user_arr[i][start_Y] = -1;
    }
}
// ���� ���� üũ
void DirectionS(int start_X, int start_Y){ 
    for(int i=start_X+1; i=height; i++){
        if(user_arr[i][start_Y] == 6) return; // �� �߽߰� ����
        user_arr[i][start_Y] = -1; 
    }
}
// ���� ���� üũ
void DirectionW(int start_X, int start_Y){ 
    for(int i=start_Y-1; i=0; i--){
        if(user_arr[start_X][i] == 6) return; // �� �߽߰� ����
        user_arr[start_X][i] = -1; 
    }
}
// ���� ���� üũ
void DirectionE(int start_X, int start_Y){ 
    for(int i=start_Y+1; i=width; i++){
        if(user_arr[start_X][i] == 6) return; // �� �߽߰� ����
        user_arr[start_X][i] = -1; 
    }
}

void CCTV_one(int n, int i){
    if(i==0) DirectionN(CCTV_arr[n].X, CCTV_arr[n].Y);
    else if(i==1) DirectionS(CCTV_arr[n].X, CCTV_arr[n].Y);
    else if(i==2) DirectionE(CCTV_arr[n].X, CCTV_arr[n].Y);
    else if(i==3) DirectionW(CCTV_arr[n].X, CCTV_arr[n].Y); 
}
void CCTV_two(int n, int i){
    if(i==0) ;
    else if(i==1) ;  
}
void CCTV_three(int n, int i){
    if(i==0) ;
    else if(i==1) ;
    else if(i==2) ;
    else if(i==3) ;     
}
void CCTV_four(int n, int i){
    if(i==0) ;
    else if(i==1) ;
    else if(i==2) ;
    else if(i==3) ;     
}
void CCTV_five(int n, int i){
    if(i==0) ;    
}
void CalCCTVRange(int n, int i){
    auto pos = CCTV_arr[n];
    if(user_arr[pos.X][pos.Y] == 1) CCTV_one(n, i);
    else if(user_arr[pos.X][pos.Y] == 2) CCTV_two(n, i);
    else if(user_arr[pos.X][pos.Y] == 3) CCTV_three(n, i);
    else if(user_arr[pos.X][pos.Y] == 4) CCTV_four(n, i);
    else if(user_arr[pos.X][pos.Y] == 5) CCTV_five(n, i);
    else ;
}

// �ּ� �簢���� ���ϱ�
int CalMinCnt(){ 
    int cnt = 0;
    for(int i=0; i<width; i++)
        for(int j=0; j<height; j++)
            if(user_arr[i][j] == 0)
                cnt++; // �簢���� ���ϱ�
    return min(cnt, min_cnt); 
}

void BackTracking(int n){
    if(n==CCTV_arr.size()){ // base condition
        min_cnt = CalMinCnt();
        return;
    }
    
    for(int i=0; i<CCTV_cnt_arr[n]; i++){ // CCTV ȸ�� ���� ���� ��ŭ �ݺ�
        CalCCTVRange(n,i);
        BackTracking(n+1);
    }
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    UserInput();
}