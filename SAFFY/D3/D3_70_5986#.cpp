// 5986

#include<bits/stdc++.h>

using namespace std;

vector<bool> decimal(1005, false);
vector<int> d;

int n, ans;

void CheckDecimal(){
  for(int i=2; i < 1000; i++){ // i*i < 1000 (X)
    if(!decimal[i]){
      d.push_back(i);
      for(int j = i*2; j < 1000; j += i){
        decimal[j] = 1;
      }
    }
  }
}

void dfs(int st, int sum, int count){
  if(count >= 3 || sum >= n){ // 제한 시간 초과 방지 
    if(count == 3 && sum == n){
      ans++; 
    }
    return;
  }

  for(int i=st; i < d.size(); i++){
    if(sum + d[i] <= n){ // if(!decimal[i]) 시  (종료 코드: 3221225725)
      dfs(i, sum + d[i], count+1);
    }
    else{ return; } 
  }
}


int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  CheckDecimal();

  int T;
  cin >> T;

  for(int tc = 1; tc <= T; tc++){
    
    cin >> n;

    ans = 0;
    
    dfs(0, 0, 0);

    cout << "#" << tc << " ";
    cout << ans;
    cout << "\n";
  }

  return 0;
}

// dfs 는 크기가 n 의 크기가 작아야 함 (최대한 for문 종료 조건을 걸어줘야 함)