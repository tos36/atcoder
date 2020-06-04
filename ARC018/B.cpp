#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n; cin >> n;
	vector<ll> x(n), y(n);
	for (int i=0; i<n; i++) cin >> x[i] >> y[i];
	
	int ret = 0;
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			for (int k=j+1; k<n; k++) {
				ll x1 = x[j] - x[i];
				ll y1 = y[j] - y[i];
				ll x2 = x[k] - x[i];
				ll y2 = y[k] - y[i];
				ll s2 = abs(x1 * y2 - x2 * y1);
				if (s2!=0 && s2%2==0) ret++;
			}
		}
	}
	cout << ret << endl;
	return 0;
}
