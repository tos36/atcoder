#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

ll check(string s) {
	int l = s.size();
	vector<vector<ll>> dp0(2, vector<ll>(l, 0));
	vector<vector<ll>> dp1(2, vector<ll>(l, 0));
	int c = s[0] - '0';
	if (c<4) {
		dp0[0][0] = c;
		dp1[0][0] = 1;
	} else if (c==4) {
		dp0[0][0] = 4;
		dp1[1][0] = 1;
	} else if (c<9) {
		dp0[0][0] = c - 1;
		dp0[1][0] = 1;
		dp1[0][0] = 1;
	} else { // c==9
		dp0[0][0] = c - 1;
		dp0[1][0] = 1;
		dp1[1][0] = 1;
	}

	for (int i=1; i<l; i++) {
		c = s[i] - '0';
		dp0[0][i] = 8 * dp0[0][i-1];
		dp0[1][i] = 2 * dp0[0][i-1] + 10 * dp0[1][i-1];
		if (c < 4) {
			dp0[0][i] += c * dp1[0][i - 1];
			dp1[0][i] = dp1[0][i - 1];
			dp0[1][i] += c * dp1[1][i - 1];
			dp1[1][i] = dp1[1][i - 1];
		} else if (c==4) {
			dp0[0][i] += c * dp1[0][i-1];
			dp0[1][i] += c * dp1[1][i-1];
			dp1[1][i] = dp1[0][i-1] + dp1[1][i-1];
		} else if (c < 9) {
			dp0[0][i] += (c - 1) * dp1[0][i-1];
			dp1[0][i] += dp1[0][i-1];
			dp0[1][i] += dp1[0][i-1] + c * dp1[1][i-1];
			dp1[1][i] += dp1[1][i-1];
		} else {
			dp0[0][i] += (c - 1) * dp1[0][i-1];
			dp0[1][i] += dp1[0][i-1] + c * dp1[1][i-1];
			dp1[1][i] += dp1[0][i-1] + dp1[1][i-1];
		}
	}
	return dp0[1][l-1] + dp1[1][l-1];
}

int main(int, char**) {
	ll a, b;
	cin >> a >> b;
	a--;
	string A = to_string(a);
	string B = to_string(b);
	cout << check(B) - check(A) << endl;
	return 0;
}
