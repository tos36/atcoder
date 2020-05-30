#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll MOD = 1000000007;

int main(int, char**) {
	int k, n;
	cin >> n >> k;
	int smax = 0;
	int now = 0;
	vector<int> ps;
	for (int i=0; i<n; i++) {
		int p; cin >> p;
		ps.push_back(p);
		if (i < k - 1) {
			now += p;
		} else {
			now += p;
			now -= ps[i - k];
			if (now > smax) smax = now;
		}
	}
	double ret = (smax + k) / 2.0;
	cout << setprecision(8) << ret << endl;
	return 0;
}
