// https://www.acmicpc.net/problem/2230

#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> v;
    int num;
    for(int i=0; i < n ; i++){
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    int en = 0;
    int min_num = 0x7FFFFFFF;

    for(int st = 0; st < n; st++){
        while(en < n && v[en] - v[st] < m) en++;
        if(en == n) break;
        min_num = min(min_num, v[en] - v[st]);
    }

    cout << min_num << "\n";

    return 0;
}