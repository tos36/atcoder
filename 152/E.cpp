#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

ll modinv(ll a, ll m) {
	ll b = m, u = 1, v = 0;
	while(b) {
		ll t = a / b;
		a -= t * b; swap(a, b);
		u -= t * v; swap(u, v);
	}
	u %= m;
	if (u < 0) u += m;
	return u;
}

ll modpow(ll x, ll n) {
        ll ans = 1;
        while(n) {
                if(n & 1) ans = (ans * x) % MOD;
                x = (x * x) % MOD;
                n>>=1;
        }
        return ans;
}


vector<pair<ll, ll>> prime_factorize(ll n) {
	vector<pair<ll, ll>> res;
	for (ll i=2; i*i <=n; i++) {
		if (n%i != 0) continue;
		ll ex = 0;
		while (n%i==0) {
			ex++; n /= i;
		}
		res.push_back({i, ex});
	}
	if (n != 1) res.push_back({n, 1});
	return res;
}

int main(int, char**) {
	int n; cin >> n;
	vector<ll> A;
	vector<ll> N(1100000, 0);
	ll lc = 1;
	for (int i=0; i<n; i++) {
		ll a; cin >> a;
		A.push_back(a);
		auto pf = prime_factorize(a);
		for (auto p : pf) N[p.first] = max(N[p.first], p.second);
	}
	ll lcm = 1;
	for (int i=2; i<1100000; i++) {
		lcm = (lcm * modpow(i, N[i]))%MOD;
	}
	ll ret = 0;
	for (int i=0; i<n; i++) {
		ll add = lcm * modinv(A[i], MOD) % MOD;
		ret = (ret + add) % MOD;
	}
	cout << ret << endl;
	return 0;
}
