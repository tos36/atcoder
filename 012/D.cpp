#include <bits/stdc++.h>

using namespace std;
const int INF = 100000000;

int main(int, char**) {
	int N, M;
	cin >> N >> M;
	vector<vector<int>> G(N, vector<int>(N, INF));
	for (int i=0; i<N; i++) G.at(i).at(i) = 0;
	for (int i=0; i<M; i++) {
		int a, b, t;
		cin >> a >> b >> t;
		a--; b--;
		G.at(a).at(b) = t;
		G.at(b).at(a) = t;
	}
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			for (int k=0; k<N; k++) {
				G[j][k] = min(G[j][k], G[j][i] + G[i][k]);
			}
		}
	}
	int min_max_len = INF;
	for (int i=0; i<N; i++) {
		int max_len = 0;
		for (int j=0; j<N; j++) {
			if (i != j && G[i][j] != INF) {
				max_len = max(max_len, G[i][j]);
			}
		}
		min_max_len = min(max_len, min_max_len);
	}
	cout << min_max_len << endl;
	return 0;
}
