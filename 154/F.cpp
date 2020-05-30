#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MOD = 1000000007;
const int MAX = 2010101;

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

ll G(int r, int c) {
	ll ret = 0;
	for (int j=1; j<c+2; j++) {
		ret += COM(r + j, j);
		ret %= MOD;
	}
	return ret;
}

int main(int, char**) {
	COMinit();
	int r1, c1, r2, c2;
	cin >> r1 >> c1 >> r2 >> c2;
	ll ret = (((G(r2, c2) 
			+ (MOD - G(r2, c1 - 1))) % MOD
			+ (MOD - G(r1 - 1, c2))) % MOD
			+ G(r1 - 1, c1 - 1))%MOD;
	cout << ret << endl;
	return 0;
}
