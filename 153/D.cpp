#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll MOD = 1000000007;

int main(int, char**) {
	ll h; cin >> h;
	ll p = h;
	ll n = 1;
	ll cnt = 0;
	while(p!=0) {
		cnt += n;
		p /= 2;
		n *= 2;
	}
	cout << cnt << endl;
	return 0;
}
