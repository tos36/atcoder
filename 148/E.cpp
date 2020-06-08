#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	ll n; cin >> n;
	ll ret = 0;
	if (n%2==1) {
		cout << ret << endl;
		return 0;
	}
	n /= 2;
	while(n) {
		ret += n/5;
		n /= 5;
	}
	cout << ret << endl;
	return 0;
}
