#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

bool check(int n) {
	for (int i=2; i*i <= n; i++){
		if (n%i==0) return false;
	}
	return true;
}

int main(int, char**) {
	int x; cin >> x;
	while (true) {
		if (check(x)) {
			cout << x << endl;
			return 0;
		}
		x++;
	}
	return 0;
}
