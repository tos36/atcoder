#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll MOD = 1000000007;

int main(int, char**) {
	int n;
	cin >> n;
	for (int i=0; i<n; i++) {
		int a;
		cin >> a;
		if (a%2==1) continue;
		if (a%2==0&&(a%3==0||a%5==0)) continue;
		else {
			cout << "DENIED" << endl;
			return 0;
		}
	}
	cout <<"APPROVED" << endl;
	return 0;
}
