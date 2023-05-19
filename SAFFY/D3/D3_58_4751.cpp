// 4751

#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;


    for(int tc = 1; tc <= T; tc++){
        
        string s;
        cin >> s; 

        int len = s.size();

        cout << ".";
        for(int i=0; i < len; i++){
            cout << ".#..";
        }
        cout << "\n";

        cout << ".";
        for(int i=0; i < len; i++){
            cout << "#.#.";
        }
        cout << "\n";

        cout << "#";
        for(int i=0; i < len; i++){
            cout << "." << s[i] << ".#";
        }
        cout << "\n"; 

        cout << ".";
        for(int i=0; i < len; i++){
            cout << "#.#.";
        }
        cout << "\n";

        cout << ".";
        for(int i=0; i < len; i++){
            cout << ".#..";
        }
        cout << "\n";
   
    }
    return 0;
}