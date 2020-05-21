#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (long long i=0; i<(long long)(n); i++)

int main(int, char**) {
	int x, y, a, b, c;
	cin >> x >> y >> a >> b >> c;
	priority_queue<long long> P, Q, R;
	rep(i, a) {
		long long p;
		scanf("%lld", &p);
		P.push(p);
	}
	rep(i, b) {
		long long q;
		scanf("%lld", &q);
		Q.push(q);
	}
	rep(i, c) {
		long long r;
		scanf("%lld", &r);
		R.push(r);
	}
	rep(i, x) {
		R.push(P.top());
		P.pop();
	}
	rep(i, y) {
		R.push(Q.top());
		Q.pop();
	}
	long long ans = 0;
	rep(i, x+y) {
		ans += R.top();
		R.pop();
	}
	cout << ans << endl;
	return 0;
}
