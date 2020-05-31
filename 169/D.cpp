#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	ll n; cin >> n;
	vector<pair<ll, ll>> res;
	for (ll a=2; a*a <=n; ++a) {
		if (n%a!=0) continue;
		ll ex = 0;
		while (n%a == 0) {
			++ex;
			n /= a;
		}
		res.push_back({a, ex});
	}
	if (n!=1) res.push_back({n, 1});

	ll ret = 0;
	vector<ll> sum(100, 0);
	for (int i=1; i<100; i++) {
		sum[i] = sum[i-1] + i;
	}

	for (auto p : res) {
		auto itr = lower_bound(sum.begin(), sum.end(), p.second);
		if (*itr != p.second) itr--;
		ret += itr - sum.begin();
	}
	cout << ret << endl;

	return 0;
}
