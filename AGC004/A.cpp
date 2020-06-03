#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n; cin >> n;
	vector<int> X, Y;
	for (int i=0; i<n; i++) {
		int x, y; cin >> x >> y;
		X.push_back(x);
		Y.push_back(y);
	}
	int maxl2 = 0;
	for (int i=0; i<n; i++) {
		for (int j=i; j<n; j++) {
			int l2 = pow(X[i] - X[j], 2) + pow(Y[i] - Y[j], 2);
			maxl2 = max(l2, maxl2);
		}
	}
	double ret = sqrt(maxl2);
	cout << setprecision(7) << ret << endl;
	return 0;
}
