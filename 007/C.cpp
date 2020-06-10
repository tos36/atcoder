#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
//const ll INF = 1LL<<60;
int INF = numeric_limits<int>::max();

int main(int, char**) {
	int r, c; cin >> r >> c;
	vector<vector<char>> M(r, vector<char>(c));
	vector<vector<int>> V(r, vector<int>(c, INF));
	int sx, sy, gy, gx;
	cin >> sy >> sx >> gy >> gx;
	sx--; sy--; gx--; gy--;
	for (int i=0; i<r; i++) {
		string s; cin >> s;
		for (int j=0; j<c; j++) M[i][j] = s[j];
	}
	vector<int> mx = {1, -1, 0, 0};
	vector<int> my = {0, 0, 1, -1};

	queue<pair<int, int>> que;
	que.push(make_pair(sy, sx));
	V[sy][sx] = 0;
	while(!que.empty()) {
		auto now = que.front();
		que.pop();
		int y = now.first;
		int x = now.second;
		int s = V[y][x];
		for (int i=0; i<4; i++) {
			int ny = y + my[i];
			int nx = x + mx[i];
			if (M[ny][nx]=='#') continue;
			if (V[ny][nx]!=INF) continue;
			V[ny][nx] = min(V[ny][nx], s + 1);
			que.push(make_pair(ny, nx));
		}
	}
	cout << V[gy][gx] << endl;
	return 0;
}
