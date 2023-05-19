// 5293

#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>
#include<queue>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {

		int A, B, C, D; /* 00 01 10 00 */

		cin >> A >> B >> C >> D;

		
		string ans = "";

		if (abs(B - C) > 1) {
			ans = "impossible";
		}
		else if (B >= 1 || C >= 1) {
			if (B > C) {
				while (A--) {
					ans += "0";
				}
				while (B--) {
					ans += "01";
				}
				while (D--) {
					ans += "1";
				}
			}
			else if(B < C){
				while (D--) {
					ans += "1";
				}
				while (C--) {
					ans += "10";
				}
				while (A--) {
					ans += "0";
				}
			}
			else {
				while (B-- > 0) {
					ans += "01";
					while (D-- > 0) {
						ans += "1";
					}
				}
				ans += "0";
				while (A-- > 0) {
					ans += "0";
				}
			}
		}
		else {
			if (A >= 1 && D >= 1) {
				ans = "impossible";
			}
			else if(A >= 1) {
				ans += "0";
				while (A--) {
					ans += "0";
				}
			}
			else if (D >= 1) {
				ans += "1";
				while (D--) {
					ans += "1";
				}
			}

		}
		
		cout << "#" << tc << " " << ans << "\n";
	}
	return 0;
}

// https://organize-study.tistory.com/144