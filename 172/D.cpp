#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n; cin >> n;
	vector<ll> F(n+1, 0);
	for (int i=1; i<n+1; i++) {
		for (int j=1; j*i<=n; j++) {
			F[i*j]++;
		}
	}
	ll ret = 0;
	for (int i=1; i<n+1; i++) {
		ret += i * F[i];
	}
	cout << ret << endl;
	return 0;
}
