#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n, m;
	cin >> n >> m;
	double angle;
	angle = abs(6 * m - (30 * (n%12) + m * 0.5));
	if (angle > 180) angle = 360 - angle;
	cout << setprecision(6) <<  angle << endl;
	return 0;
}
