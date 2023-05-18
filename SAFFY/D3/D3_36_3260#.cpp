// 3260

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

        string A, B;
        string ans = "";
        cin >> A >> B;

        if(A.length() < B.length()){
            swap(A,B);
        }

        for(int i = B.length(); i < A.length(); i++){
            B = '0' + B;
        }

        int tmp = 0;
        int sum;
        for(int i= A.length() - 1; i >= 0 ; i--)
        {
            sum = tmp + (A[i] - '0') + (B[i] - '0');

            if(sum >= 10){
                ans.push_back((sum-10) + '0');
                tmp = 1;
            }
            else{
                ans.push_back(sum + '0');
                tmp = 0;
            }
        }
        if(tmp) ans.push_back('1');

        reverse(ans.begin(), ans.end());

        cout << "#" << tc << " " << ans << "\n";
    }

    return 0;
}

/*
    for(int tc = 1; tc <= T; tc++){

        string A, B;
        cin >> A >> B;

        if(A.length() < B.length()){
            swap(A,B);
        }

        char ans[105];

        int A_length = A.length();
        int B_length = B.length();

        int tmp = 0;
        int n;
        for(int i=1; i <= A_length; i++){
            if(B_length - i >= 0){
                n = (A[A_length - i] - '0') + (B[B_length -i] - '0') + tmp;
            }
            else{
                n = (A[A_length - i] - '0') + tmp;    
            }

            if(n >= 10){
                ans[A_length - i + 1] = (n-10) + '0';
                tmp = 1;
            }
            else{
                ans[A_length - i + 1] = n + '0';
                tmp = 0;
            }
        }

        int len = max(A_length, B_length);

        cout << "#" << tc << " ";
        for(int i = 0; i <= len; i++){
            cout << ans[i];
        }
        cout << "\n";
    }
*/