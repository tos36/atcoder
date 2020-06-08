#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n; cin >> n;
	int ret = 0;
	int target = 1;
	for (int i=0; i<n; i++) {
		int a; cin >> a;
		if (a==target) target++;
		else ret++;
	}
	if (target==1) ret = -1;
	cout << ret << endl;
	return 0;
}
