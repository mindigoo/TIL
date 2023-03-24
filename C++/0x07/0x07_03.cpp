// https://www.acmicpc.net/problem/1021
// 1021번. AC

#include<bits/stdc++.h>

using namespace std;

vector<int> split(const string &str, char sep)
{
    vector<int> tokens;
 
    int i;
    stringstream ss(str);
    while (ss >> i) {
        tokens.push_back(i);
        if (ss.peek() == sep) {
            ss.ignore();
        }
    }
 
    return tokens;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int user_cnt;
    cin >> user_cnt;

    while(user_cnt--)
    {
        deque<int> DQ;
        string str, user_arr;
        int arr_num, tmp, result=1;
        char separator = ',';

        cin >> str >> arr_num >> user_arr;

        vector<int> arr = split(user_arr.substr(1, user_arr.length()-2), ',');
                
        for(int i=0; i < arr_num  ; i++) // queue에 배열 넣기
        {
            DQ.push_back(arr[i]);
        }

        for(char C : str)
        {
            if(C =='D')
            {
                if(!DQ.empty()) DQ.pop_front();
                else
                {
                    result = 0;
                    break;
                }
            }
            else if(C =='R')
            {
                for(int i=0; i < DQ.size()/2 ;i++)
                {
                    swap(DQ[i], DQ[DQ.size()-1-i]);
                }
            }
            else;
        }


        if(result==0) cout << "error\n";
        else
        {
            cout << "[";
            for(int i=0; i < DQ.size(); i++)
            {
                cout << DQ[i];
                if(i != DQ.size()-1) cout << ",";
            }
            cout << "]\n";
        }

    }

}

// 다시
// 시간 초과