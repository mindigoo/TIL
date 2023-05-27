// 5549

#include<bits/stdc++.h>

using namespace std;


int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++){
        double D, A, B, F;
        cin >> D >> A >> B >> F;

        double s1 = D / (B + F); // 파리가 B 기차와 만나는 시간
        D = F * s1 - A * s1; // 그 때 파리와 기차의 거리
        double s2 = D / (A + B); // 그 후에 A기차와 B기차 만나는 시간

        // ans = D / (A + B) * F; // A 와 B 가 만나는 시간 동안 파리의 이동 거리 (거리 = 시간 * 속력)

        cout << fixed << setprecision(6);
        cout << "#" << tc << " ";
        cout << F * s1 + F * s2 << "\n";
    }

    return 0;
}


// https://medium.com/@peteryun/algo-%EC%B2%98%EC%9D%8C%ED%95%98%EB%8A%94-c-%EA%B8%B0%EB%B3%B8%EC%9E%85%EC%B6%9C%EB%A0%A5-setprecision-2a42d7df1235