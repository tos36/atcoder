#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n; cin >> n;
	string s; cin >> s;
	for (int i=0; i<s.size(); i++) {
		if (s[i] + n > 'Z') s[i] -= (26 - n);
		else s[i] += n;
	}
	cout << s << endl;
	return 0;
}
