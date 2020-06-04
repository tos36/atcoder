#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	double h, b; cin >> h >> b;
	cout << setprecision(5) << b * pow(h/100.0, 2) << endl;
	return 0;
}
