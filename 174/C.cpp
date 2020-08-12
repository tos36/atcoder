#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int k; cin >> k;
	if (k%7==0) k /= 7;
	int ret = -1;
	ll prev = 1;
	for (int i=1; i<k+3; i++) {
		ll now;
		now = (10 * prev)%(9 * k);
		if (now==1) {
			ret = i;
			break;
		} else {
			prev = now;
		}
	}
	cout << ret << endl;
	return 0;
}
