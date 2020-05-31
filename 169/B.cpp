#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	ll limit = pow(10, 18);
	ll ret = 1;
	int n;
	cin >> n;
	vector<ll> A;
	for (int i=0; i<n; i++) {
		ll a; cin >> a;
		A.push_back(a);
		if (a==0) {
			cout << 0 << endl;
			return 0;
		}
	}
	for (int i=0; i<n; i++) {
		ll now = A[i];
		if (now == limit) {
			cout << -1 << endl;
			return 0;
		}
		if (ret * now > limit) {
			cout << -1 << endl;
			return 0;
		} else {
			ret *= now;
		}
	}
	cout << ret << endl;
	return 0;
}
