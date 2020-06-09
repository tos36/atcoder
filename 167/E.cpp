#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MOD = 998244353;
const int MAX = 2010101;
const ll INF = 1LL<<60;

ll fac[MAX], finv[MAX], inv[MAX];

void COMinit() {
        fac[0] = fac[1] = 1;
        finv[0] = finv[1] = 1;
        inv[1] = 1;
        for (int i=2; i<MAX; i++) {
                fac[i] = fac[i - 1] * i % MOD;
                inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
                finv[i] = finv[i - 1] * inv[i] % MOD;
        }
}

ll COM(int n, int k) {
        if (n < k) return 0;
        if (n < 0 || k < 0) return 0;
        return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

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
	COMinit();
	int n, m, k; cin >> n >> m >> k;
	ll ret = 0;
	for (int i=0; i<k+1; i++) {
		ret += ((m * mypow(m - 1, n - 1 - i))%MOD * COM(n - 1, i))%MOD;
		ret %= MOD;
	}
	cout << ret << endl;
	return 0;
}
