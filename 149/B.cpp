#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	ll a, b, k;
	cin >> a >> b >> k;
	ll ra, rb;
	if (k <= a) {
		ra = a - k;
		rb = b;
	} else if (k>a && k <= a+b) {
		ra = 0;
		rb = b + a - k;
	} else {
		ra = 0;
		rb = 0;
	}
	cout << ra << " " << rb << endl;
	return 0;
}
