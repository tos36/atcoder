#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n; cin >> n;
	vector<int> D;
	int w; cin >> w;
	D.push_back(w);
	for (int i=1; i<n; i++) {
		cin >> w;
		auto itr = lower_bound(D.begin(), D.end(), w);
		if (itr==D.end()) {
			D.push_back(w);
		} else {
			*itr = w;
		}
	}
	cout << D.size() << endl;
	return 0;
}
