#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n; cin >> n;
	string s; cin >> s;
	int l = 0;
	int r = n - 1;
	int ret = 0;
	while (l < r) {
		while (s[l]=='R' && l < n) l++;
		while (s[r]=='W' && r > -1) r--;
		if (s[l]=='W' && s[r]=='R' && l < r) {
			ret++;
			l++;
			r--;
		}
	}
	cout << ret << endl;
	return 0;
}
