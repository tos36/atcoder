#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	ll n; cin >> n;
	string ret = "";
	ll div = 26;

	while (n!=0) {
		n--;
		int now = n%26;
		n = n/26;
		char c = 'a' + now;
		ret = c + ret;
	}
	cout << ret << endl;
	return 0;
}
