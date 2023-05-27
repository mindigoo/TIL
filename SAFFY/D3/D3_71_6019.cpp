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

        double s1 = D / (B + F); // �ĸ��� B ������ ������ �ð�
        D = F * s1 - A * s1; // �� �� �ĸ��� ������ �Ÿ�
        double s2 = D / (A + B); // �� �Ŀ� A������ B���� ������ �ð�

        // ans = D / (A + B) * F; // A �� B �� ������ �ð� ���� �ĸ��� �̵� �Ÿ� (�Ÿ� = �ð� * �ӷ�)

        cout << fixed << setprecision(6);
        cout << "#" << tc << " ";
        cout << F * s1 + F * s2 << "\n";
    }

    return 0;
}


// https://medium.com/@peteryun/algo-%EC%B2%98%EC%9D%8C%ED%95%98%EB%8A%94-c-%EA%B8%B0%EB%B3%B8%EC%9E%85%EC%B6%9C%EB%A0%A5-setprecision-2a42d7df1235