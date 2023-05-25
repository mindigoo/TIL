// 5948

#include<bits/stdc++.h>

using namespace std;

int arr[10];
int ans[305];

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++){

        memset(arr, 0, sizeof(arr));
        memset(ans, 0, sizeof(ans));

        vector<int> result;

        for(int i=0; i < 7; i++){
          cin >> arr[i];
        }

        for(int i=0; i < 7; i++){
          for(int j=i+1; j < 7; j++){
            for(int k=j+1; k < 7; k++){
              int sum = arr[i] + arr[j] + arr[k];

              if(!ans[sum]){
                ans[sum] = 1;
                result.push_back(sum);
              }
            }
          }
        }

        sort(result.begin(), result.end(), greater<int>());

        cout << "#" << tc << " ";
        cout << result[4];
        cout << "\n";
    }

    return 0;
}


/*
int arr[10];
bool vis[10];
bool ans[305];

vector<int> v;

void func(int n, int sum){
  if(n == 3){
    if(!ans[sum]){
      ans[sum] = 1;
      v.push_back(sum);

      return;
    }
  }

  for(int i=0; i<7; i++){ //  -> 조합 이니까 i = st로 수정
    if(!vis[i]){
      vis[i] = 1;
      func(n+1, sum+arr[i]);
      vis[i] = 0;
    }
  }
}

void Reset(){
    memset(arr, 0, sizeof(arr));
    memset(vis, 0, sizeof(vis));
    memset(ans, 0, sizeof(ans));
    v.clear();
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++){

        Reset();

        for(int i=0; i<7; i++) cin >> arr[i];

        func(0, 0);

        sort(v.begin(), v.end());

        cout << "#" << tc << " ";
        cout << v[v.size()-5];
        cout << "\n";
    }

    return 0;
}
*/


/*
#include<iostream>
#include <queue>
using namespace std;
int main(int argc, char** argv)
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int test_case;
    int T;
    cin >> T;
    int max;
 
    for (test_case = 1; test_case <= T; ++test_case)
    {
        bool check[301] = { false, };
        int num[7];
        for (int i = 0; i < 7; i++) {
            cin >> num[i];
        }
        for (int i = 0; i < 7; i++) {
            for (int j = i+1; j < 7; j++) {
                for (int k = j+1; k < 7; k++) {
                    check[num[i] + num[j] + num[k]] = true;
                }
            }
        }
        int count = 0;
        for (int i = 300; i >= 0; i--) {
            if (check[i]) count++;
            if (count == 5) { 
                cout << "#" << test_case << " " << i << "\n"; 
                break; 
            }
        }
 
    }
    return 0;
}
*/