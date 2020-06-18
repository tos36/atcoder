#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n; cin >> n;
	vector<int> L(n);
	for (int i=0; i<n; i++) cin >> L[i];
	vector<int> R = L;
	sort(L.begin(), L.end());
	ll ret = 0;
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			int d = lower_bound(L.begin(), L.end(), L[i] + L[j]) - L.begin();
			ret += max(0, d - (j + 1));
		}
	}
	cout << ret << endl;
	return 0;
}
