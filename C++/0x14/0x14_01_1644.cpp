// https://www.acmicpc.net/problem/1644

#include <bits/stdc++.h>
using namespace std;

const int MXN = 4000002;
vector<bool> seive(MXN, true);
vector<int> primes;
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  for(int i=2; i*i<MXN; i++){
    if (!seive[i]) continue;
    for (int j = i * i; j < MXN; j += i) 
      seive[j] = false;
  }
  for (int i = 2; i < MXN; i++) if (seive[i]) primes.push_back(i);
  primes.push_back(0);

  int target, s = 0, e = 1, ans = 0, tmpSum = primes[0];
  cin >> target;
  while (1) {
    if (tmpSum == target) ans++;
    if (tmpSum <= target) tmpSum += primes[e++];
    if (target < tmpSum) tmpSum -= primes[s++];
    if (e == int(primes.size())) break;
  }
  cout << ans;
}



/*
#include<bits/stdc++.h>

using namespace std;
 
vector<int> check;

int prime[4000000];
int n;
int ans = 0;

void checkprime(){
    prime[0] = 1;
    prime[1] = 1;

    for(int i=2; i <= 4000000; i++){
        if(prime[i]){continue;}
        
        check.push_back(i); // ¼Ò¼ö 

        for(int j=i+i; j <= 4000000; j+=i){
            prime[j] = 1;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    checkprime();

    cin >> n;



    cout << ans;
}
*/