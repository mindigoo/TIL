// 3131

#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>
#include<queue>

using namespace std;

vector<bool> arr(1000005, 0);

int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i=2; i <= 1000000; i++){
        if(!arr[i]){
            cout << i << " ";
            for(int j=i*2; j <= 1000000; j+=i){
                arr[j] = 1;
            }
        }
    }
    return 0;
}