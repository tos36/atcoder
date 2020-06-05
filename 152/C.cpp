#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
//const ll INF = 1LL<<60;
int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n; cin >> n;
	int premin = INF;
	int ret = 0;
	for (int i=0; i<n; i++) {
		int now; cin >> now;
		if (premin > now) ret++;
		premin = min(premin, now);
	}
	cout << ret << endl;
	return 0;
}
