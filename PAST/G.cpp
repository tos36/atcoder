#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
//const ll INF = 1LL<<60;
int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n, x, y; cin >> n >> x >> y;
	vector<vector<int>> grid(410, vector<int>(410, -1));
	int ox = 205;
	int oy = 205;
	for (int i=0; i<n; i++) {
		int a, b; cin >> a >> b;
		a += ox;
		b += oy;
		grid[a][b] = INF;
	}
	grid[ox][oy] = 0;
	queue<pair<int, int>> que;
	que.push(make_pair(ox, oy));
	while(!que.empty()){
		pair<int, int> now = que.front();
		que.pop();
		for (int i=-1; i<=1; i++) {
			for (int j=-1; j<=1; j++) {
				if (i==0 && j==0) continue;
				if (i==-1 && j==-1) continue;
				if (i==1 && j==-1) continue;
				int nex = now.first + i;
				int ney = now.second + j;
				if (nex==(x+oy)&&ney==(y+oy)) {
					cout << grid[now.first][now.second] + 1 << endl;
					return 0;
				} else if (grid[nex][ney]==INF) {
					continue;
				} else if (grid[nex][ney]==-1) {
					grid[nex][ney] = grid[now.first][now.second] + 1;
					que.push(make_pair(nex, ney));
				}
			}
		}
	}
	cout << -1 << endl;
	return 0;
}
