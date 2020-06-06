#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();
ll mypow(ll x, ll n) {
        ll ans = 1;
        while(n) {
                if(n & 1) ans = (ans * x);
                x = (x * x);
                n>>=1;
        }
        return ans;
}

int main(int, char**) {
	ll a, r, n; cin >> a >> r >> n;
	
	bool check = ((n-1) * log10(r) + log10(a) > 9);

	if (check) cout << "large" << endl;
	else cout << a * mypow(r, n-1) << endl;

	return 0;
}
