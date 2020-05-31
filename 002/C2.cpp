#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
//const ll INF = 1LL<<60;
int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n; cin >> n;
	string s; cin >> s;
	vector<string> com = {"AA", "AB", "AX", "AY",
		   "BA", "BB", "BX", "BY",
		   "XA", "XB", "XX", "XY",
		   "YA", "YB", "YX", "YY"};
	vector<int> dp(n+1);
	int ret = INF;
	
	for (int l=0; l<16; l++) {
		for (int r=0; r<16; r++) {
			// Initialize
			for (int i=0; i<n+1; i++) dp[i] = i;
			if (l==r) continue;
			string L = com[l];
			string R = com[r];

			// dp for command L
			for (int i=0; i<n; i++) {
				if (s[i]==L[0] && s[i+1]==L[1]) {
					dp[i + 1] = min(dp[i+1], dp[i]+1);
					dp[i + 2] = min(dp[i+2], dp[i]+1);
					i++;
				} else {
					dp[i + 1] = min(dp[i+1], dp[i]+1);
				}
			}

			// dp for command R
			for (int i=0; i<n; i++) {
				if (s[i]==R[0] && s[i+1]==R[1]) {
					dp[i + 1] = min(dp[i+1], dp[i]+1);
					dp[i + 2] = min(dp[i+2], dp[i]+1);
					i++;
				} else {
					dp[i + 1] = min(dp[i+1], dp[i]+1);
				}
			}

			// check minimum
			ret = min(ret, dp[n]);
		}
	}
	cout << ret << endl;
	return 0;
}
