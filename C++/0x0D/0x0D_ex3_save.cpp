// https://www.acmicpc.net/problem/12100
// 12100번. 2048(Easy)

#include<bits/stdc++.h>

using namespace std;

int gameboard[6][20][20];

int move_position[20];
int boardsize;
int max_num;

void InputUesrData(){
    cin >> boardsize;

    for(int i=0; i<boardsize; i++)
        for(int j=0; j<boardsize; j++)
            cin >> gameboard[0][i][j];
}  

void OutputUesrData(){
    for(int i=0; i<boardsize; i++){
        cout << "\n";
        for(int j=0; j<boardsize; j++){
            cout << gameboard[0][i][j] << " ";
        } 
    }
}  

void MovePositionArrResetMAX(){
    fill(move_position, move_position+boardsize, boardsize);
}
void MovePositionArrResetMIN(){
    fill(move_position, move_position+boardsize, 0);
}

void MoveUp(){
    MovePositionArrResetMAX();
    for(int row=0; row<boardsize; row++){
        for(int col=0; col<boardsize; col++){
            if(gameboard[row][col] != 0){ // 0 아니면
                if(move_position[col] <= row){ // 해당 행의 이동 가능 위치보다 더 앞이면
                    if(gameboard[move_position[col]-1][col] == gameboard[row][col]){  // 이동시 앞 위치와 값이 같은 경우
                        gameboard[move_position[col]-1][col] *= 2; // 합치기
                    }   
                    else{
                        gameboard[move_position[col]][col] = gameboard[row][col]; // 값 이동
                        move_position[col]++; // 이동할 위치 한 칸 뒤로 변경 
                    }
                    gameboard[row][col] = 0;
                }
                else if(move_position[col] > row)
                    move_position[col] = row+1;
            }
            else{ // 0 이면
                if(move_position[col] > row) move_position[col] = row; // 해당 행의 이동할 위치로 지정
            }
        }
    }
}

void MoveDown(){
    MovePositionArrResetMIN();
    for(int row=boardsize-1; row>=0; row--){
        for(int col=0; col<boardsize; col++){
            if(gameboard[row][col] != 0){ // 0 아니면
                if(move_position[col] >= row){ // 이동 가능 위치보다 더 앞이면
                    if(gameboard[move_position[col]+1][col] == gameboard[row][col]){  // 이동시 앞 위치와 값이 같은 경우
                        gameboard[move_position[col]+1][col] *= 2;
                    }   
                    else{
                        gameboard[move_position[col]][col] = gameboard[row][col]; // 값 이동
                        move_position[col]--; // 이동할 위치 한 칸 뒤로 변경 
                    }
                    gameboard[row][col] = 0;
                }
                else if(move_position[col] < row)
                    move_position[col] = row-1;
            }
            else{ // 0 이면
                if(move_position[col] < row) move_position[col] = row; // 이동할 위치 저장
            }
        }
    }
}

void MoveLeft(){
    MovePositionArrResetMAX();
    for(int row=0; row<boardsize; row++){
        for(int col=0; col<boardsize; col++){
            if(gameboard[row][col] != 0){ // 0 아니면
                if(move_position[row] <= col){ // 해당 행의 이동 가능 위치보다 더 뒤면
                    if(gameboard[row][move_position[row]-1] == gameboard[row][col]){  // 이동시 앞 위치와 값이 같은 경우
                        gameboard[row][move_position[row]-1] *= 2; // 합치기
                    }   
                    else{
                        gameboard[row][move_position[row]] = gameboard[row][col]; // 값 이동
                        move_position[row]++; // 이동할 위치 한 칸 뒤로 변경 
                    }
                    gameboard[row][col] = 0;
                }
                else if(move_position[row] > col)
                    move_position[row] = col+1;
            }
            else{ // 0 이면
                if(move_position[row] > col) move_position[row] = col; // 해당 행의 이동할 위치로 지정
            }
        }
    }
}

void MoveRight(){
    MovePositionArrResetMIN();
    for(int row=0; row<boardsize; row++){
        for(int col=boardsize-1; col>=0; col--){
            if(gameboard[row][col] != 0){ // 0 아니면
                if(move_position[row] >= col){ // 이동 가능 위치보다 더 앞이면
                    if(gameboard[row][move_position[row]+1] == gameboard[row][col]){  // 이동시 앞 위치와 값이 같은 경우
                        gameboard[row][move_position[row]+1] *= 2;
                    }   
                    else{
                        gameboard[row][move_position[row]] = gameboard[row][col]; // 값 이동
                        move_position[row]--; // 이동할 위치 한 칸 뒤로 변경 
                    }
                    gameboard[row][col] = 0;
                }
                else if(move_position[row] < col)
                    move_position[row] = col-1;
            }
            else{ // 0 이면
                if(move_position[row] < col) move_position[row] = col; // 이동할 위치 저장
            }
        }
    }
}

void CheckGameBoardMaxNumber(){
    for(int i=0; i<boardsize; i++){
        for(int j=0; j<boardsize; j++){
            max_num = max(max_num, gameboard[5][i][j]);
        }
    }
}

void MoveGameBoard(int n, int i){
    if(i==0) MoveUp(n);
    else if(i==1) MoveDown(n);
    else if(i==2) MoveRight(n);
    else if(i==3) MoveLeft(n);
}

void CopyGameBoard(int n){
    if(n==0) copy(&gameboard[0][0][0], &gameboard[0][boardsize][boardsize], gameboard[1][boardsize][boardsize]);
    else if(n==1) copy(&gameboard[1][0][0], &gameboard[1][boardsize][boardsize], gameboard[2][boardsize][boardsize]);
    else if(n==2) copy(&gameboard[2][0][0], &gameboard[2][boardsize][boardsize], gameboard[3][boardsize][boardsize]);
    else if(n==3) copy(&gameboard[3][0][0], &gameboard[3][boardsize][boardsize], gameboard[4][boardsize][boardsize]);
    else if(n==4) copy(&gameboard[4][0][0], &gameboard[4][boardsize][boardsize], gameboard[5][boardsize][boardsize]);
}

void RepeatMoveGameBoard(int n, int i){
    if(n==5){
        CheckGameBoardMaxNumber();
        return;
    }
    if(i==0) CopyGameBoard(n);

    for(int i=0; i<4; i++){
        MoveGameBoard(n, i);
        RepeatMoveGameBoard(n+1,i);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    InputUesrData();
    RepeatMoveGameBoard(0,0);
}
