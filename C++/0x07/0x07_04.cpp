// https://www.acmicpc.net/problem/11003
// 11003번. 최솟값 찾기

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> DQ;
    int num, cnt, tmp;

    cin >> num >> cnt;

    int* arr = new int[num];

    for(int i=0; i < num ;i++)
    {
        cin >>  tmp;
        arr[i] = tmp;
    }

    for(int i=0; i < num; i++)
    {
        if(i < cnt)
        {
            DQ.push_back(arr[i]);
        }
        else
        {
            DQ.pop_front();
            DQ.push_back(arr[i]);
        }
        cout << *min_element(DQ.begin(), DQ.end()) << " "; 
    }
}

// 시간 초과