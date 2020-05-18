#include <bits/stdc++.h>

using namespace std;

int main(int, char**) {
	int k;
	string s;
	cin >> k;
	cin >> s;
	int m = s.size();
	if (m <= k) {
		cout << s << endl;
	} else {
		s = s.substr(0, k);
		cout << s << "..." << endl;
	}
	return 0;
}
