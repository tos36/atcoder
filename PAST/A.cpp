#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	string s, t;
	cin >> s >> t;
	string s1 = s;
	string t1 = t;
	transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
	transform(t1.begin(), t1.end(), t1.begin(), ::toupper);
	string ret;
	if (s==t) ret = "same";
	else if (s1==t1) ret = "case-insensitive";
	else ret = "different";
	cout << ret << endl;
	return 0;
}
