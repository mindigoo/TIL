// 4047

#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>

using namespace std;

int ans[4];
int arr[4][15];

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++){
        
        string str;
        cin >> str;

        memset(arr, 0, sizeof(arr));
        memset(ans, 0, sizeof(ans));

        bool flag = 0;
        for(int i=0; i < str.length(); i+=3){
            string s = str.substr(i,3);

            if(s[0] == 'S'){
                if(!arr[0][stoi(s.substr(1,2))]){
                    arr[0][stoi(s.substr(1,2))]++;
                    ans[0]++;
                }
                else{
                    flag = 1;
                    break;
                }
            }
            else if(s[0] == 'D'){
                if(!arr[1][stoi(s.substr(1,2))]){
                    arr[1][stoi(s.substr(1,2))]++;
                    ans[1]++;
                }
                else{
                    flag = 1;
                    break;
                }
            }
            else if(s[0] == 'H'){
                if(!arr[2][stoi(s.substr(1,2))]){
                    arr[2][stoi(s.substr(1,2))]++;
                    ans[2]++;
                }
                else{
                    flag = 1;
                    break;
                }
            }
            else if(s[0] == 'C'){
                if(!arr[3][stoi(s.substr(1,2))]){
                    arr[3][stoi(s.substr(1,2))]++;
                    ans[3]++;
                }
                else{
                    flag = 1;
                    break;
                }
            }
        }

        cout << "#" << tc << " ";
        if(flag == 1){
            cout << "ERROR";
        }
        else{
            for(int i=0; i < 4; i++){
                cout << 13 - ans[i] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
