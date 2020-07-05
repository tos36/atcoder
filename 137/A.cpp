#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int a, b; cin >> a >> b;
	cout << max(a+b, max(a-b, a*b)) << endl;
	return 0;
}
