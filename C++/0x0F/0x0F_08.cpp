// https://www.acmicpc.net/problem/10825
// 10825번. 국영수

#include<bits/stdc++.h>

using namespace std;

int cnt;
vector<string> v[100000];

void InputUserDate(){
    cin >> cnt;

    string str;
    for(int i=0; i<cnt ;i++){
        for(int j=0; j<4; j++){
            cin >> str;
            v[i].push_back(str);
        }
    }
}

void OutputData(){
    for(int i=0; i< cnt; i++){
        cout << v[i][0] << "\n";
    }
}

bool Cmp(const string a, const string b){
    if(a[1] != b[1]) return a[1] > b[1];
    if(a[2] != b[2]) return a[2] < b[2];
    if(a[3] != b[3]) return a[3] > b[3];
    return a[0] < b[0];
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
 
    InputUserDate();
    OutputData();
}

