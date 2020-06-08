#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	string ret;
	if (c*b > a*d) ret = "TAKAHASHI";
	else if (c*b==a*d) ret = "DRAW";
	else ret = "AOKI";
	cout << ret << endl; 
	return 0;
}
