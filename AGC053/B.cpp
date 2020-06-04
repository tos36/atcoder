#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	string s; cin >> s;
	map<char, int> cnt;
	
	for (int i=0; i<s.size(); i++) {
		char c = s[i];
		if (cnt.count(c)) cnt[c]++;
		else cnt[c] = 1;
	}
	
	int ker = 0;
	int pair = 0;
	for (auto p : cnt) {
		int a = p.second;
		ker +=  a%2;
		pair += a/2;
	}

	if (ker==0) cout << 2 * pair << endl;
	else cout << 1 + 2 * (pair / ker) << endl;
	return 0;
}
