#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int x, y; cin >> x >> y;
	x--; y--;
	string W; cin >> W;
	vector<int> dirc;
	if (W=="R") dirc = {0, 1};
	else if (W=="L") dirc = {0, -1};
	else if (W=="U") dirc = {-1, 0};
	else if (W=="D") dirc = {1, 0};
	else if (W=="RU") dirc = {-1, 1};
	else if (W=="RD") dirc = {1, 1};
	else if (W=="LU") dirc = {-1, -1};
	else dirc = {1, -1};

	vector<vector<int>> C(9, vector<int>(9));
	for (int i=0; i<9; i++) {
		string s; cin >> s;
		for (int j=0; j<9; j++) {
			C[i][j] = s[j] - '0';
		}
	}

	cout << C[y][x];
	for (int i=0; i<3; i++) {
		int nx, ny;
		nx = x + dirc[1];
		ny = y + dirc[0];
		if (nx<0 || nx>8) {
			dirc[1] *= -1;
			nx = x + dirc[1];
		}
		if (ny<0 || ny>8) {
			dirc[0] *= -1;
			ny = y + dirc[0];
		}
		x = nx;
		y = ny;
		cout << C[y][x];
	}
	cout << endl;
	return 0;
}
