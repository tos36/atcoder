#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n; cin >> n;
	vector<int> ret(n, 0);
	for (int i=0; i<n; i++) {
		int a; cin >> a;
		ret[a - 1] = i + 1;
	}
	for (int i=0; i<n; i++) cout << ret[i] << " ";
	cout << endl;
	return 0;
}
