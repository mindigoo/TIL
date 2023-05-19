// 4676

#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>

using namespace std;

int arr[25];

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++){
        
        string str;
        cin >> str;

        vector<int> v;

        int n;
        cin >> n;
        
        for(int i=0; i < n; i++){
            int tmp;
            cin >> tmp;
            v.push_back(tmp);
        }

        sort(v.begin(), v.end());

        int len = str.length();
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(v[i] == len){
                str += '-';
            }
            else{
                str.insert(v[i] + cnt++, "-");
            }
        }

        cout << "#" << tc << " " << str << "\n"; 

    }
    return 0;
}


/*
// ¹Ý·Ê
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++){
        
        string str;
        cin >> str;

        memset(arr, 0, sizeof(arr));

        int n;
        cin >> n;

        int num;
        for(int i=0; i < n; i++){
            cin >> num;
            arr[num]++;
        }

        string ans = "";
        for(int i=0; i < 20; i++){
            while(arr[i] > 0){
                ans += '-';
                arr[i]--;
            }
            
            if(str.length() > i){
                ans += str[i];
            }
        }
        cout << "#" << tc << " " << ans << "\n";
    }
    return 0;
}
*/