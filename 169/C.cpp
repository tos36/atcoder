#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	ll a; cin >> a;
	string b; cin >> b;
	b.erase(1, 1);
	ll c = 0;
	for (int i=0; i<3; i++) {
		c += (b[i] - '0') * pow(10, 2-i);
	}
	cout << (a * c)/100 << endl;
	return 0;
}
