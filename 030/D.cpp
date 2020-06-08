#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
// const ll INF = 1LL<<60;
int INF = numeric_limits<int>::max();

ll mypow(ll x, ll n, ll m) {
        ll ans = 1;
        while(n) {
                if(n & 1) ans = (ans * x) % m;
                x = (x * x) % m;
                n>>=1;
        }
        return ans;
}


int main(int, char**) {
	int n, a; cin >> n >> a; a--;
	string k; cin >> k;
	vector<int> B(n), V(n, -1);
	for (int i=0; i<n; i++) {
		int b; cin >> b; b--;
		B[i] = b;
	}
	int K;
	if (k.size() >= 7) {
		K = INF;
	} else {
		K = atoi(k.c_str());
	}
	int step = 0;
	ll roop = 0;
	ll way = 0;
	int rstart;
	V[a] = 0;
	int now = a;
	while(true) {
		step++;
		int next = B[now];
		if (V[next]==-1) {
			V[next] = step;
			now = next;
		} else {
			roop = step - V[next];
			way = V[next];
			rstart = next;
			break;
		}
	}
	int ans;
	if (K > way) {
		ll ret = 0;
		for (int i=0; i<k.size(); i++) {
			int c = k[i] - '0';
			ret = (ret*10 + c)%roop;
		}
		ret = (ret - way%roop)%roop;
		while (ret<0) ret += roop;
		ans = rstart;
		for (int i=0; i<ret; i++) ans = B[ans];
	} else {
		ans = a;
		for (int i=0; i<K; i++) ans = B[ans];
	}
	cout << ans + 1 << endl;
	return 0;
}
