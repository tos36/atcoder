#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	ll n, m, k; cin >> n >> m >> k;
	vector<ll> As, Bs;
	As.push_back(0);
	Bs.push_back(0);
	ll sm = 0;
	for (int i=0; i<n; i++) {
		ll a; cin >> a;
		sm += a;
		if (sm > k) {
			As.push_back(INF);
			sm = k + 1;
		} else As.push_back(sm);
	}
	sm = 0;
	for (int i=0; i<m; i++) {
		ll b; cin >> b;
		sm += b;
		if (sm > k) {
			Bs.push_back(INF);
			sm = k + 1;
		} else Bs.push_back(sm);
	}
	int ret = 0;
	for (int i=0; i<As.size(); i++) {
		if (As[i]>k) break;
		ll rem = k - As[i];
		auto itr = upper_bound(Bs.begin(), Bs.end(), rem);
		int b;
		b = itr - Bs.begin();
		b = max(0, b - 1);
		ret = max(ret, i+b);
		//cout << i << " " << b << " " << rem << " " << As[i] << endl;
	}
	cout << ret << endl;
	return 0;
}
