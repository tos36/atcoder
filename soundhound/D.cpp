#include <bits/stdc++.h>

using namespace std;
using Edge = pair<int, int>;
using Graph = vector<vector<Edge>>;

Graph G1;
Graph G2;
const long long INF = numeric_limits<long long>::max();
int n, m, s, t;

vector<long long> solve(Graph G, int start) {
	vector<long long> dp(n, INF);
	priority_queue<pair<long long, long long>,
		vector<pair<long long, long long>>,
		greater<pair<long long, long long>>> que;

	dp[start] = 0;
	que.push(make_pair(0, start)); // cost, node

	while (!que.empty()) {
		auto p = que.top();
		que.pop();
		int v = p.second; //node
		long long cost = p.first; //cost
		if (cost > dp[v]) continue;

		for (auto e : G[v]) {
			int nv = e.first; //next node
			long long ncost = e.second; // next cost;
			if (dp[nv] > dp[v] + ncost) {
				dp[nv] = dp[v] + ncost;
				que.push(make_pair(dp[nv], nv));
			}
		}

	}
	return dp;

}

int main(int, char**) {
	cin >> n >> m >> s >> t;
	s--;
	t--;

	G1.assign(n, vector<Edge>());
	G2.assign(n, vector<Edge>());

	for (int i=0; i<m; i++) {
		long long u, v, a, b;
		cin >> u >> v >> a >> b;
		u--;
		v--;
		G1[u].push_back(Edge(v, a));
		G1[v].push_back(Edge(u, a));
		G2[u].push_back(Edge(v, b));
		G2[v].push_back(Edge(u, b));
	}

	stack<int> stk;
	long long prev = INF;
	vector<long long> dp1 = solve(G1, s);
	vector<long long> dp2 = solve(G2, t);
	for (int i=n-1; i>=0; i--) {
		long long cost = dp1[i] + dp2[i];
		if (prev > cost) {
			stk.push(cost);
			prev = cost;
		} else {
			stk.push(prev);
		}
	}
	for (int i=0; i<n; i++) {
		long long ans = pow(10, 15) - stk.top();
		stk.pop();
		cout << ans << endl;
	}
	return 0;
}



