#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();
vector<pair<ll, ll>> prime_fac(ll N) {
	vector<pair<ll, ll>> res;
	for (ll i=2; i*i<= N; i++) {
		if (N%i != 0) continue;
		ll ex = 0;
		while (N%i==0) {
			ex++;
			N /= i;
		}
		res.push_back({i, ex});
	}
	if (N != 1) res.push_back({N, 1});
	return res;
}

int main(int, char**) {
	ll n; cin >> n;
	vector<ll> mem(n+1, 0);
	for (ll i=2; i<=n; i++) {
		const auto &res = prime_fac(i);
		for (auto p : res) {
			mem[p.first] += p.second;
		}
	}
	ll ret = 1;
	for (int i=2; i<=n; i++) {
		ret *= mem[i] + 1;
		ret %= MOD;
	}
	cout << ret << endl;
	return 0;
}
