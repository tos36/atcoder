#include <bits/stdc++.h>

using namespace std;

int main(int, char**) {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> G;
	G.assign(n, vector<int>());
	for (int i=0; i<m; i++) {
		int a, b;
		cin >> a >> b;
		a--; b--;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	vector<int> num(n, 0);
	num.at(0) = 1;
	queue<int> que;
	que.push(0);
	int cnt = 1;

	while (!que.empty()) {
		int q = que.front();
		que.pop();
		int len = G[q].size();
		for (int i=0; i<len; i++) {
			int p = G[q][i];
			if (num[p]==0) {
				num[p] = q + 1;
				que.push(p);
				cnt++;
				//cout << p << endl;
				//cout << cnt << endl;
			}
		}
	}
	if (cnt==n) {
		cout << "Yes" << endl;
		for (int i=1; i<n; i++) {
			cout << num[i] << endl;
		}
	} else {
		cout << "No" << endl;
	}
	return 0;
}
