#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n, m; cin >> n >> m;
	int x, y; cin >> x >> y;
	vector<ll> A(n), B(m);
	for (int i=0; i<n; i++) cin >> A[i];
	for (int i=0; i<m; i++) cin >> B[i];
	int ret = 0;
	ll time = 0;
	int now = 0; // 0:A, 1:B
	while (true) {
		if (now==0) {
			auto itr = lower_bound(A.begin(), A.end(), time);
			if (itr!=A.end()) {
				time = *itr + x;
				now = 1;
			} else {
				break;
			}
		} else { // now==1
			auto itr = lower_bound(B.begin(), B.end(), time);
			if (itr!=B.end()) {
				time = *itr + y;
				now = 0;
				ret++;
			} else {
				break;
			}
		}
	}
	cout << ret << endl;
	return 0;
}
