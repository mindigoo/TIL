// 2948

// 투포인터

#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>
#include<queue>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for(int test_case = 1; test_case <= T; test_case++){

		int s1, s2;

		vector<string> str1;
		vector<string> str2;

		cin >> s1 >> s2;


		string tmp;
		for(int i=0; i < s1; i++){
			cin >> tmp;
			str1.push_back(tmp);
		}
		for(int i=0; i < s2; i++){
			cin >> tmp;
			str2.push_back(tmp);
		}

		sort(str1.begin(), str1.end());
		sort(str2.begin(), str2.end());

		int ans = 0;

		auto str1_itr = str1.begin();
		auto str2_itr = str2.begin();

		while(str1_itr != str1.end() && str2_itr != str2.end()){
			
			if(*str1_itr == *str2_itr){
				ans++;
				str1_itr++;
				str2_itr++;
			}
			else if(*str1_itr < *str2_itr){
				str1_itr++;
			}
			else if(*str1_itr > *str2_itr){
				str2_itr++;
			}
		}
		
		cout << "#" << test_case << " " << ans << "\n";
	}
	return 0;
}

/*
// 이분 탐색

#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>
#include<queue>

using namespace std;

int s1, s2;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for(int test_case = 1; test_case <= T; test_case++){
        
		vector<string> str1;
		vector<string> str2;

		cin >> s1 >> s2;

		string tmp;
		for(int i=0; i < s1; i++){
			cin >> tmp;
			str1.push_back(tmp);
		}
		for(int i=0; i < s2; i++){
			cin >> tmp;
			str2.push_back(tmp);
		}

		sort(str1.begin(), str1.end());
		sort(str2.begin(), str2.end());

		int ans = 0;
		for(int i=0; i < s1; i++){
			if(binary_search(str2.begin(), str2.end(), str1[i])){
				ans++;
			}
		}
		
		cout << "#" << test_case << " " << ans << "\n";
	}
	return 0;
}
*/

/*
// 해쉬

#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);


	int t, n, m;
	cin >> t;
	for (int tc = 1; tc <= t; tc++) {
		cin >> n >> m;
		string s;
		unordered_map<string, string> hash;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			cin >> s;
			hash.insert({ s,s });
		}
		for (int i = 0; i < m; i++) {
			cin >> s;
			if (hash.find(s) != hash.end()) {
				cnt++;
			}
		}

		cout << "#" << tc << " " << cnt<<"\n";
	}


	return 0;
}
*/