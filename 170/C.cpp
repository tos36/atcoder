#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int x, n;
	cin >> x >> n;
	vector<int> P(n, 0);
	for (int i=0; i<n; i++) cin >> P[i];
	sort(P.begin(), P.end());
	if (!binary_search(P.begin(), P.end(), x)){
		cout << x << endl;
		return 0;
	}
	int dif = 1;
	while(true) {
		if(!binary_search(P.begin(), P.end(), x - dif)) {
			cout << x - dif << endl;
			return 0;
		} else if (!binary_search(P.begin(), P.end(), x + dif)) {
			cout << x + dif << endl;
			return 0;
		}
		dif++;
	}
	return 0;
}
