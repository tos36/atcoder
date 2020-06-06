#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	ll n; cin >> n;
	vector<ll> g, r;
	for (ll i=0; i<n; i++) {
		g.push_back(i);
		r.push_back(i);
	}
	int inv = 0;

	int q; cin >> q;
	for (int i=0; i<q; i++) {
		int q; cin >> q;
		if (q==3) {
			inv = (inv + 1)%2;
			continue;
		}
		int a, b; cin >> a >> b;
		a--; b--;

		if ((q==1&&inv==0) || (q==2&&inv==1)) {
			if (a!=b) swap(g[a], g[b]);
		}  else if ((q==2&&inv==0) || (q==1&&inv==1)) {
			if (a!=b) swap(r[a], r[b]);
		} else {
			ll ret;
			if (inv==0) ret = n * g[a] + r[b];
			else ret = n * g[b] + r[a];
			cout << ret << endl;
		}
	}
	return 0;
}
