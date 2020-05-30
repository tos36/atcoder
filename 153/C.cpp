#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll MOD = 1000000007;

int main(int, char**) {
	int n, k;
	cin >> n >> k;
	priority_queue<ll> m;

	for (int i=0; i<n; i++) {
		ll h; cin >> h;
		m.push(h);		
	}

	ll ret = 0;
	for (int i=0; i<n; i++) {
		if (i >= k) ret += m.top();
		m.pop();
	}
	
	cout << ret << endl;
	return 0;
}
