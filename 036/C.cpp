#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n; cin >> n;
	vector<ll> A;
	map<ll, int> M;
	for (int i=0; i<n; i++) {
		ll a; cin >> a;
		A.push_back(a);
		M[a] = 0;
	}
	int cnt = 0;
	for (auto p : M) {
		M[p.first] = cnt;
		cnt++;
	}
	for (int i=0; i<n; i++) {
		cout << M[A[i]] << endl;
	}

	return 0;
}
