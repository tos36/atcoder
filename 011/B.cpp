#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	map<char, char> cmap;
	cmap['b'] = '1';
	cmap['c'] = '1';
	cmap['d'] = '2';
	cmap['w'] = '2';
	cmap['t'] = '3';
	cmap['j'] = '3';
	cmap['f'] = '4';
	cmap['q'] = '4';
	cmap['l'] = '5';
	cmap['v'] = '5';
	cmap['s'] = '6';
	cmap['x'] = '6';
	cmap['p'] = '7';
	cmap['m'] = '7';
	cmap['h'] = '8';
	cmap['k'] = '8';
	cmap['n'] = '9';
	cmap['g'] = '9';
	cmap['z'] = '0';
	cmap['r'] = '0';
	int n; cin >> n;
	string ret;
	for (int i=0; i<n; i++) {
		string w; cin >> w;
		char prev = ' ';
		for (int j=0; j<w.size(); j++) {
			char now = w[j];
			//if (now=='.'||now==',') continue;
			if (isupper(now)) now = tolower(now);
			if (cmap.count(now)) {
				ret += cmap[now];
				prev = cmap[now];
			}
			if (j==w.size()-1 && prev != ' ') {
				ret += ' ';
				prev = ' ';
			}
		}
	}
	if (ret[ret.size() - 1] == ' ') ret.erase(ret.size() - 1);
	cout << ret << endl;
	return 0;
}
