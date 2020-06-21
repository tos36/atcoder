#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n, k; cin >> n >> k;
	vector<int> P(n);
	for (int i=0; i<n; i++) cin >> P[i];
	sort(P.begin(), P.end());
	int ret = 0;
	for (int i=0; i<k; i++) ret += P[i];
	cout << ret << endl;
	return 0;
}
