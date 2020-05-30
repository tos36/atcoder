#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll MOD = 1000000007;

int main(int, char**) {
	ll h, n;
	cin >> h >> n;
	ll p = 0;
	for (int i=0; i<n; i++) {
		int a; cin >> a;
		p += a;
	}
	if (h > p) cout << "No" << endl;
	else cout << "Yes" << endl;
	return 0;
}
