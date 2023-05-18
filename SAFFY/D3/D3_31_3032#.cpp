// 3032

#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>
#include<queue>

using namespace std;

void extu(int r1, int r2)
{
    int r, q, s, s1 = 1, s2 = 0, t, t1 = 0, t2 = 1, tmp = r1;
    
    while(r2)
    {
        q = r1 / r2;
        r = r1 % r2;
        s = s1 - q * s2;
        t = t1 - q * t2;
        
        r1 = r2;
        r2 = r;
        s1 = s2;
        s2 = s;
        t1 = t2;
        t2 = t;
    }
    if(r1 != 1)
        cout << -1;
    else
    	cout << s1 << " " << t1;
}

int main(void)
{
    int t;
    cin >> t;
    
    for(int tc = 1; tc <= t; tc++)
    {
        int a, b;
        cin >> a >> b;
        
        cout << "#" << tc << " ";
        extu(a, b);
        cout << endl;
    }
    return 0;
}