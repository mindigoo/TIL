// https://www.acmicpc.net/problem/16987
// 16987번. 계란으로 계란치기

#include<bits/stdc++.h>

#define X first // 내구도
#define Y second // 무게

using namespace std;

int N, N_copy;
int max_num = 0;
pair<int,int> user_arr[10];

void func(int n){ // 함수 인자 : 달걀 자리
    if(n==N){ 
        int egg_cnt=0;
        for(int i=0; i< N_copy; i++) // 달걀 내구도 확인
            if(user_arr[i].X < 1) egg_cnt++;
        max_num = max(max_num, egg_cnt);
        return;
    }
    for(int i=n; i<N ;i++){
        if(i==N-1) func(i+1); // 마지막 달걀인 경우 패스
        if(user_arr[i].X > 0){ // 내구도 확인
            for(int j=0; j<N; j++){
                if(i==j) continue; // 자기 자신 패스
                if(user_arr[j].X < 1) continue; // 깨진 달걀인지 확인 (내구도 확인)
                
                if(j==N_copy-1 && user_arr[j].X - user_arr[i].Y < 1) N--; // 맞은 달걀이 마지막 달걀인데 깨진경우
                user_arr[i].X -= user_arr[j].Y; // 때린 달걀 내구도 - 맞은 달걀 무게
                user_arr[j].X -= user_arr[i].Y; // 맞은 달걀 내구도 - 때린 달걀 무게
                func(i+1);
                user_arr[i].X += user_arr[j].Y; // 때린 달걀 내구도 + 맞은 달걀 무게
                user_arr[j].X += user_arr[i].Y; // 맞은 달걀 내구도 + 때린 달걀 무게
                if(j==N-1 && user_arr[j].X - user_arr[i].Y < 1) N++; // 맞은 달걀이 마지막 달걀인데 깨진경우               
            }
        }
    }
}

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    N_copy = N;
    for(int i=0; i<N; i++) cin >> user_arr[i].X >> user_arr[i].Y;

    func(0);

    cout << max_num;
}

// 틀린 이유 : 마지막 달걀이 깨진 경우 꼬임 -> N_copy 생성




/*
void func(int n){ // 함수 인자 : 달걀 자리
    if(n==N){ 
        int egg_cnt=0;
        for(int i=0; i<N; i++) // 달걀 내구도 확인
            if(user_arr[i].X < 1)
                egg_cnt++;
        max_num = max(max_num, egg_cnt);
        return;
    }

    for(int i=n; i<N ;i++){
        if(user_arr[i].X > 0){ // 내구도 확인
            for(int j=0; j<N; j++){
                if(i==j) continue; // 자기 자신 패스
                if(user_arr[j].X < 1) continue; // 깨진 달걀인지 확인 (내구도 확인)
                
                if(j==N-1 && user_arr[j].X - user_arr[i].Y < 1) N--; // 맞은 달걀이 마지막 달걀인데 깨진경우
                user_arr[i].X -= user_arr[j].Y; // 때린 달걀 내구도 - 맞은 달걀 무게
                user_arr[j].X -= user_arr[i].Y; // 맞은 달걀 내구도 - 때린 달걀 무게
                func(i+1);
                user_arr[i].X += user_arr[j].Y; // 때린 달걀 내구도 + 맞은 달걀 무게
                user_arr[j].X += user_arr[i].Y; // 맞은 달걀 내구도 + 때린 달걀 무게
                if(j==N-1 && user_arr[j].X - user_arr[i].Y < 1) N++; // 맞은 달걀이 마지막 달걀인데 깨진경우               
            }
        }
    }
}
*/