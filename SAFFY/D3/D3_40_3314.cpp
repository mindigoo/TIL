// 3314

#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>

#define X first
#define Y second

using namespace std;

int arr[1005];

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++){

        int num;
        int sum = 0;
        for(int i=0; i < 5; i++)
        {
            cin >> num;

            if(num < 40){
                sum += 40;
            }
            else{
                sum += num;
            }
        }

        cout << "#" << tc << " " << sum / 5 << "\n";
    }

    return 0;
}
