// https://www.acmicpc.net/problem/15683
// 15683¹ø. °¨½Ã

#include<bits/stdc++.h>

using namespace std;

vector<int> v;

void InputUserDate(){
    int cnt;
    cin >> cnt;
    while(cnt--){
        int num;
        cin >> num;

        v.push_back(num);
    }
}

void OutputData(){
    for(int i=0; i < v.size() ;i++){
        cout << v[i] << "\n";
    }
}

int main(){
    InputUserDate();
    sort(v.begin(), v.end());
    OutputData();
}