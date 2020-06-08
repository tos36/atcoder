#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

ll gcd(ll a, ll b) {
	if (a%b==0) return b;
	else return gcd(b, a%b);
}

ll lcm(ll a, ll b) {
	return a * b / gcd(a, b);
}

int main(int, char**) {
	ll a, b; cin >> a >> b;
	cout << lcm(a, b) << endl;
	return 0;
}
