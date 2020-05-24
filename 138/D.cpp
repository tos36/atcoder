#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll MOD = 1000000007;

int main(int, char**) {
	int n, q;
	cin >> n >> q;
	vector<vector<int>> tree(n, vector<int>());
	for (int i=0; i<n-1; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		a--; b--;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}
	vector<vector<int>> sons(n, vector<int>());
	vector<bool> visit(n, false);
	queue<int> check;
	check.push(0);

	while(!check.empty()){
		int now = check.front();
		check.pop();
		visit[now] = true;
		if (tree[now].empty()) continue; // no son
		for (int i=0; i<tree[now].size(); i++) {
			int a = tree[now][i];
			if (visit[a]) continue;
			sons[now].push_back(a);
			check.push(a);
		}
	}

	vector<int> score(n, 0);
	for (int i=0; i<q; i++) {
		int p, x;
		scanf("%d %d", &p, &x);
		p--;
		score[p] += x;
	}

	vector<int> ret(n, 0);

	queue<int> que;
	que.push(0);

	while(!que.empty()) {
		int now = que.front();
		que.pop();
		ret[now] = score[now];
		if (sons[now].empty()) continue; // no son
		for (int i=0; i<sons[now].size(); i++) {
			int a = sons[now][i];
			score[a] += score[now];
			que.push(a);
		}
	}

	for (int i=0; i<n; i++) {
		cout << ret[i] << " ";
	}
	cout << endl;

	return 0;
}
