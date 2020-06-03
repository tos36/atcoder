#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n; cin >> n;
	ll maxcnt = 0;
	int maxl = 0;
	int maxlid;
	vector<int> L;
	for (int i=0; i<n; i++) {
		int d; cin >> d;
		L.push_back(d);
		maxcnt += d;
		if (d > maxl) {
			maxl = d;
			maxlid = i;
		}
	}
	cout << maxcnt << endl;
	cout << max(0LL, 2 * maxl - maxcnt) << endl;
	return 0;
}
