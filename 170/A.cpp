#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int ret;
	for (int i=0; i<5; i++) {
		int x; cin >>x;
		if (x==0) ret = i+1;
	}
	cout << ret << endl;
	return 0;
}
