// 5549

#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++){

        string str;
        cin >> str;

        int n = str[str.length()-1] - '0';
        string result = "";
        
        if(n % 2)
            result += "Odd";
        else result += "Even";

        cout << "#" << tc << " ";
        cout << result;
        cout << "\n";
    }

    return 0;
}