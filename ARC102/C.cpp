#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n, k; cin >> n >> k;
	ll bai = n / k;
	ll half;
	if (k%2==0) {
		half = bai;
		if (n%k >= k/2) half++;
	} else {
		half = 0;
	}
	ll ret = bai * bai * bai + half * half * half;
	cout << ret << endl;
	return 0;
}
