#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
// const ll INF = 1LL<<60;
int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n, l; cin >> n >> l;
	vector<int> check(l+1, INF);
	vector<int> H(l+1, 0);
	for (int i=0; i<n; i++) {
		int x; cin >> x;
		H[x] = 1;
	}
	int t1, t2, t3;
	cin >> t1 >> t2 >> t3;
	check[0] = 0;
	for (int i=0; i<l; i++) {
		int now = check[i];
		if (H[i+1]==1) check[i+1] = min(check[i+1], now + t1 + t3);
		else check[i+1] = min(check[i+1], now + t1);

		if (i+2 > l) {
			check[l] =  min(check[l], now + t1 /2 + t2 / 2);
		} else if (H[i+2]==1) {
			check[i+2] = min(check[i+2], now + t1 + t2 + t3);
		} else {
			check[i+2] = min(check[i+2], now + t1 + t2);
		}

		if (i+4 > l) {
			check[l] = min(check[l], now + t1/2 + t2/2 + t2 * (l - i - 1));
		} else if (H[i+4]==1) check[i+4] = min(check[i+4], now + t1 + t2 * 3 + t3);
		else check[i+4] = min(check[i+4], now + t1 + t2 * 3);
	}
	cout << check[l] << endl;
	return 0;
}
