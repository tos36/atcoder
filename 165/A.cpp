#include <bits/stdc++.h>

using namespace std;

int main(int, char**) {
	int k, a, b;
	cin >> k >> a >> b;
	for (int i=a; i<b+1; i++) {
		if (i%k==0) {
		       cout << "OK" << endl;
		     return 0;
		}
	}
	cout << "NG" << endl;	
	return 0;
}
