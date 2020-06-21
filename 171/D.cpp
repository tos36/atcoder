#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n; cin >> n;
	vector<int> A(101010, 0);
	ll S = 0;
	for (int i=0; i<n; i++) {
		int a; cin >> a;
		S += a;
		A[a]++;
	}
	int q; cin >> q;
	for (int i=0; i<q; i++) {
		int b, c; cin >> b >> c;
		S = S - b * A[b] + c * A[b];
		A[c] += A[b];
		A[b] = 0;
		cout << S << endl;
	}

	return 0;
}
