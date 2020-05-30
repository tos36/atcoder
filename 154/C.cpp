#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll MOD = 1000000007;

int main(int, char**) {
	set<ll> S;
	ll n; cin >> n;
	for (int i=0; i<n; i++) {
		ll a; cin >> a;
		if (S.count(a)) {
			cout << "NO" << endl;
			return 0;
		} else {
			S.insert(a);
		}
	}
	cout << "YES" << endl;
	return 0;
}
