#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int a, b; cin >> a >> b;
	for (int i=0; i<max(a,b); i++) cout << min(a, b);
	cout << endl;
	return 0;
}
