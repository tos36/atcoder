#include <bits/stdc++.h>

using namespace std;

int main(int, char**) {
	int N;
	cin >> N;
	int r = 2025 - N;
	for (int i=1; i<10; i++) {
		for (int j=1; j<10; j++) {
			if (i*j==r) cout << i << " x " << j << endl;
		}
	}
	return 0;
}
