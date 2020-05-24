#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll MOD = 1000000007;

int main(int, char**) {
	int n; cin >> n;
	vector<int> value;
	
	for (int i=0; i<n; i++) {
		int v; cin >> v;
		value.push_back(v);
	}
	
	sort(value.begin(), value.end(), greater<int>());

	double ans = 0;
	double c = 1;
	for (int i=0; i<n; i++) {
		if (i != n-1) c *= 0.5;
		ans += value[i] * c;
	}
	cout << ans << endl;
	return 0;
}
