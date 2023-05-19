// 4371

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

        int arr[5005];
        int num;

        for(int i=0; i < n; i++){
            cin >> num;
            arr[i] = num - 1;
        }

        vector<int> v;

        for(int i=1; i < n; i++){
            bool flag = 0;
            for(int j = 0; j < v.size(); j++){
                if(arr[i] % v[j] == 0){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) v.push_back(arr[i]);
        }

        cout << "#" << tc << " " << v.size() << "\n";
    }

    return 0;
}
