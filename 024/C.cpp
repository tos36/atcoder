#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	ll n; cin >> n;
	int d, k; cin >> d >> k;
	
	vector<int> L(d), R(d);
	for (int i=0; i<d; i++) cin >> L[i] >> R[i];

	vector<int> S(k), T(k);
	for (int i=0; i<k; i++) cin >> S[i] >> T[i];

	vector<int> ret(k, -1);
	for (int i=0; i<d; i++) {
		int l = L[i];
		int r = R[i];
		for (int j=0; j<k; j++) {
			int now = S[j];
			if (now == T[j]) continue;
			if (now < l || now > r) continue;
			else if (l <= T[j] && T[j] <= r) {
				S[j] = T[j];
				ret[j] = i + 1;
			} else if (T[j] < l) {
				S[j] = l;
			} else {
				S[j] = r;
			}
		}
	}
	for (int i=0; i<k; i++) {
		cout << ret[i] << endl;
	}
	return 0;
}
