// 5356

#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    
    for(int tc = 1; tc <= t; tc++)
    {
        string str[5];

        int max_len = 0;
        for(int i=0; i<5; i++){
            cin >> str[i];
            int len = str[i].length();
            max_len = max(max_len, len);
        }

        cout << "#" << tc << " ";
        for(int i=0; i< max_len; i++){
            for(int j=0; j < 5; j++){
                if(str[j].length() > i){
                    cout << str[j][i];
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
