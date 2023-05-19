// 3809

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
        int n;
        cin >> n;
        
        string str = "";

        char c;
        for(int i=0; i < n; i++){
            cin >> c;
            str.push_back(c);
        }

        int k = 0;

        while(1)
        {
            bool flag = 0;
            string a = to_string(k);

            for(int i = 0; i < (n - a.size() + 1); i++){
                if(a.compare(str.substr(i, a.size())) == 0){
                    k++;
                    flag = 1;
                    break;
                }
            }

            if(flag == 0){ break; }
        }

        cout << "#" << tc << " " << k << "\n";
    }

    return 0;
}

/*
        cin >> N;
        str = "";
 
        for (int i = 0; i < N; i++) {
            cin >> ch;
            str += ch;
        }
        int key = 0;
        while (1) {
            if (str.find(to_string(key)) == string::npos) {
                break;
            }
            key++;
        }
        cout << "#" << tc << " " << key << "\n";
*/