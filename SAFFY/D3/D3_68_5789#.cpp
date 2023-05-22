// 5789

#include<bits/stdc++.h>

using namespace std;

int arr[1005];

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++){

        int n, q;
        cin >> n >> q;

        memset(arr, 0, sizeof(arr));

        int l, r;
        for(int i=1; i<=q; i++){
            cin >> l >> r;

            for(int j=l; j<=r; j++){
                arr[j] = i;
            }
        }

        cout << "#" << tc << " ";
        for(int i=1; i<=n; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }

    return 0;
}

/*
// 실행시간 짧은 코드 살펴보기

int main()
{
  std::ios_base::sync_with_stdio(false), std::cin.tie(nullptr), std::cout.tie(nullptr);
  int test_case, T, N, Q, i, j;
  std::array<int, 1001> box;
  std::array<std::array<int, 2>, 1001> qlist;
  std::string out;
  std::cin >> T;
  for (test_case = 1; test_case <= T; ++test_case)
  {
    std::cin >> N >> Q;
    for (i = 1; i <= N; ++i)
      box[i] = 0;
    for (i = 1; i <= Q; ++i)
      std::cin >> qlist[i][0] >> qlist[i][1];
 
    for (j = qlist[Q][0]; j <= qlist[Q][1]; ++j)
      box[j] = Q;
 
    for (i = Q - 1; i > 0; --i)
    {
      if (qlist[i][1] < qlist[Q][0] || qlist[i][0] > qlist[Q][1])
      {
        for (j = qlist[i][0]; j <= qlist[i][1]; ++j)
          if (box[j] == 0)
            box[j] = i;
      }
      else
      {
        if (qlist[i][0] < qlist[Q][0])
        {
          for (j = qlist[i][0]; j < qlist[Q][0]; ++j)
          {
            if (box[j] == 0)
              box[j] = i;
          }
          qlist[Q][0] = qlist[i][0];
        }
        if (qlist[i][1] > qlist[Q][1])
        {
          for (j = qlist[Q][1] + 1; j <= qlist[i][1]; ++j)
          {
            if (box[j] == 0)
              box[j] = i;
          }
          qlist[Q][1] = qlist[i][1];
        }
      }
    }
    out += '#' + std::to_string(test_case);
    for (i = 1; i <= N; ++i)
      out += ' ' + std::to_string(box[i]);
    out += '\n';
  }
  std::cout << out;
  return 0;
}
*/