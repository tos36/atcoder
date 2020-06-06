#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n, m, q; cin >> n >> m >> q;
	vector<int> score(m, n);
	vector<vector<int>> check(n, vector<int>(m, 0));
	for (int i=0; i<q; i++) {
		int s; cin >> s;
		if (s==1) {
			int a; cin >> a; a--;
			int ret = 0;
			for (int i=0; i<m; i++) {
				if (check[a][i]==1) ret += score[i];
			}
			cout << ret << endl;
		} else {
			int a, b; cin >> a >> b;
			a--; b--;
			check[a][b] = 1;
			score[b]--;
		}
	}
	return 0;
}
