#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll MOD = 1000000007;
const ll INF = 1LL<<60;

int main(int, char**) {
	int h, n;
	cin >> h >> n;
	vector<int> A, B;
	for (int i=0; i<n; ++i) {
		int a, b;
		cin >> a >> b;
		A.push_back(a);
		B.push_back(b);
	}
	vector<ll> dp(h + 1, INF);
	dp[0] = 0;

	for (int i=0; i<dp.size(); i++) {
		for(int j=0; j<n; j++) {
			int next_index = min(i + A[j], h);
			dp[next_index] = min(dp[next_index], dp[i] + B[j]);
		}
	}
	cout <<  dp[h] << endl;


	return 0;
}
