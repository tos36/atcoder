#include <bits/stdc++.h>

using namespace std;
using Edge = pair<long long, long long>;
using Graph = vector<vector<Edge>>;

const long long INF = numeric_limits<long long>::max();

int main(int, char**) {
	Graph G;
	int n, m;
	cin >> n >> m;
	G.assign(n, vector<Edge>());

	int start = 0;
	long long start_max = 0;
	for (int i=0; i<m; i++) {
		long long u, v, s;
		cin >> u >> v >> s;
		u--; v--;
		if (v < u) swap(u, v); // u < v
		G[u].push_back(Edge(v, s));
		if (u==start && (start_max < s -1)) {
			start_max = s - 1;
		}
	}


	vector<long long> dp_min(n, 0);
	vector<long long> dp_max(n, INF);
	queue<long long> que;

	dp_min[start] = 1; // min
	dp_max[start] = start_max; // max
	long long len = start_max;

	que.push(start); // cum, node
	bool ok = true;


	while (!que.empty() && ok) {
		long long v = que.front(); //node
		que.pop();
		long long v_min = dp_min[v];
		long long v_max = dp_max[v];

		for (auto e : G[v]) {
			long long nv = e.first; //next node
			long long nsum = e.second; // sum;
			bool first = (dp_min[nv]==0);
			long long nv_min = max(dp_min[nv], nsum - v_max);
			long long nv_max = min(dp_max[nv], nsum - v_min);
			if (nv_min < 1) nv_min = 1;
			if (nv_max < nv_min) {
				len = 0;
				ok = false;
				break;
			}
			//cout << v << " " << nv << " " << nv_min << " " << nv_max << endl;
			dp_min[nv] = nv_min;
			dp_max[nv] = nv_max;
			long long nlen = nv_max - nv_min + 1;
			if (len > nlen) len = nlen;
			if (first) que.push(nv);
		}
	}
	cout << len << endl;
	return 0;
}
