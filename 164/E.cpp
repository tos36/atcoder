#include <bits/stdc++.h>
using namespace std;

using mt = pair<long long, long long>; // money and time
using Edge = pair<int, mt>;
using Graph = vector<vector<Edge>>;
vector<long long> C, D;

const long long INF = 1LL<<60;
Graph G;

int main(int, char**) {
	int N, M;
	int64_t S;
	cin >> N >> M >> S;
	if (S > 50 * 50) S = 2500;
	G.assign(N, vector<Edge>());

	for (int i=0; i<M; i++) {
		long long u, v, a, b;
		cin >> u >> v >> a >> b;
		u--;
		v--;
		G[u].push_back(Edge(v, mt(a, b)));
		G[v].push_back(Edge(u, mt(a, b)));
	}

	C.resize(N); D.resize(N);
	for (int i=0; i<N; i++) cin >> C[i] >> D[i];

	vector<vector<long long>> dp(N, vector<long long>(2501, INF));
	priority_queue<pair<long long, mt>, // type of elements
		vector<pair<long long, mt> >, // container
		greater<pair<long long, mt> > > que; //grater

	dp[0][S] = 0; //node, money
	que.push(make_pair(0, mt(0, S)));

	while (!que.empty()) {
		auto p = que.top();
		que.pop();
		long long time = p.first;
		int v = p.second.first; //node
		long long s = p.second.second; //money
		if (time > dp[v][s]) continue;

		if (s + C[v] <= 2500) {
			long long ns = s + C[v];
			long long ntime = time + D[v];
			if (dp[v][ns] > ntime) {
				dp[v][ns] = ntime;
				que.push(make_pair(ntime, mt(v, ns)));
			}
		}

		for (auto e : G[v]) {
			if(s < e.second.first) continue;
			int nv = e.first; //node
			long long ns = s - e.second.first; //money
			long long ntime = time + e.second.second; //time
			if (dp[nv][ns] > ntime) {
				dp[nv][ns] = ntime;
				que.push(make_pair(ntime, mt(nv, ns)));
			}
		}

	}
	for (int v=1; v<N; v++) {
		long long res = INF;
		for (int s=0; s<= 2500; s++) {
			if (res > dp[v][s]) res = dp[v][s];
		}
		cout << res << endl;
	}
	return 0;
}
