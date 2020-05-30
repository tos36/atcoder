#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;

int main(int, char**) {
	ll a, b, c, k;
	cin >> a >> b >> c >> k;
	ll ret = 0;
	if (k <= a) {
		ret = k;
	} else if (k <= a + b) {
		ret = a;
	} else {
		ret = a - (k - a - b);
	}
	cout << ret << endl;
	return 0;
}
