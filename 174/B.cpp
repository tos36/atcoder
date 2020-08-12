#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	ll n, d; cin >> n >> d;
	int ret = 0;
	for (int i=0; i<n; i++){
		ll x, y; cin >> x >> y;
		if (d*d >= x*x + y*y) ret++;
	}
	cout << ret << endl;
	return 0;
}
