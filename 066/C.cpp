#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

ll mypow(ll x, ll n) {
        ll ans = 1;
        while(n) {
                if(n & 1) ans = (ans * x) % MOD;
                x = (x * x) % MOD;
                n>>=1;
        }
        return ans;
}

int main(int, char**) {
	ll n; cin >> n;
	int odd = 0;
	if (n%2==1) odd = 1;

	int maxin = n - 1;
	vector<int> check(n, 0);
	check[0] = odd;
	int ret = 0;
	for (int i=0; i<n; i++) {
		int a; cin >> a;
		if ((a + odd)%2 != 1) break;
		else if (a > maxin) break;
		else {
			check[a]++;
			if (check[a] > 2) break;
		}
		if (i==n-1) ret = mypow(2, n/2);
	}
	cout << ret << endl;
	return 0;
}
