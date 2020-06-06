#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n; cin >> n;
	string s1, s2, s3, s4, s5;
	cin >> s1 >> s2 >> s3 >> s4 >> s5;
	string ret = "";
	for (int i=0; i<n; i++) {
		string key1 = "";
		string key2 = "";
		for (int j=1; j < 4; j++) {
			key1 += s2[4*i + j];
			key2 += s4[4*i + j];
		}
		char now;
		if (key1=="#.#" && key2=="#.#") {
			if (s3[4*i+2]=='.') now = '0';
			else now = '8';
		} else if (key1=="##." && key2==".#.") now = '1';
		else if (key1=="..#" && key2=="#..") now = '2';
		else if (key1=="..#" && key2=="..#") {
			if (s3[4*i+2]=='#') now = '3';
			else now = '7';
		} else if (key1=="#.#" && key2=="..#") {
			if (s1[4*i+2]=='.') now = '4';
			else now = '9';
		} else if (key1=="#.." && key2=="..#") now = '5';
		else now = '6';

		ret += now;
	}
	cout << ret << endl;
	return 0;
}
