#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

using Graph = vector<vector<int>>;

int main(int, char**) {
	int n, m, q; cin >> n >> m >> q;
	Graph G(n);
	for (int i=0; i<m; i++) {
		int u, v; cin >> u >> v;
		u--; v--;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	vector<int> C(n);
	for (int i=0; i<n; i++) {
		cin >> C[i];
	}
	for (int i=0; i<q; i++) {
		int c; cin >> c;
		if (c==1) {
			int x; cin >> x; x--;
			cout << C[x] << endl;
			for (int j=0; j<G[x].size(); j++) {
				C[G[x][j]] = C[x];
			}
		} else {
			int x, y; cin >> x >> y; 
			x--;
			cout << C[x] << endl;
			C[x] = y;
		}
	}
	return 0;
}
