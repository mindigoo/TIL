// https://www.acmicpc.net/problem/5648
// 5648번. 역원소 정렬

#include<bits/stdc++.h>

using namespace std;

vector<int> v;

void InputUserDate(){
    int cnt, num;
    cin >> cnt;

    while(cnt--){
        cin >> num;
        v.push_back(num);
    }
}

void OutputData(){
    for(int i=0; i<v.size() ;i++){
        cout << v[i] << " ";
    }
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    InputUserDate();
    OutputData();
}

