#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int x, y; cin >> x >> y;
	for (int i=0; i<=x; i++) {
		int a = i * 4;
		int b = (x - i) * 2;
		if (a + b == y) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}
