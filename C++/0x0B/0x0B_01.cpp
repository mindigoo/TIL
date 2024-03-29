// https://www.acmicpc.net/problem/17478
// 17478번. 재귀함수가 뭔가요?

#include<bits/stdc++.h>

using namespace std;

void AutoAnswer(int n, string s){
    if(n==0) return ;
    cout << s + "\"재귀함수가 뭔가요?\"\n";
    cout << s + "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n";
    cout << s + "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n";
    cout << s + "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n";
    s += "____";
    AutoAnswer(n-1, s);
    if(n==1){
        cout << s + "\"재귀함수가 뭔가요?\"\n";
        cout << s + "\"재귀함수는 자기 자신을 호출하는 함수라네\"\n";
    }
    cout << s + "라고 답변하였지.\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s = "";
    int n;
    cin >> n;

    cout << s << "\n";

    cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n";
    AutoAnswer(n, s);
    cout << "라고 답변하였지.\n";
}


// 틀린 이유 : 출력 형식이 잘못되었습니다.

/*
#include <bits/stdc++.h>
using namespace std;
int N;
void _bar(const char* str, int stk){
  for (int j = 0; j < stk; ++j) cout << "____";
  cout << str;
}
void solve(int cnt){
  _bar("\"재귀함수가 뭔가요?\"\n", cnt);
  if (cnt == N) _bar("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n", cnt);
  else{
    _bar("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n", cnt);
    _bar("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n", cnt);
    _bar("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n", cnt);
    solve(cnt + 1);
  }
  _bar("라고 답변하였지.\n", cnt);
}
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> N;
  cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n";
  solve(0);
}
*/