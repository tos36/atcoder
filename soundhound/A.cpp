#include <bits/stdc++.h>
using namespace std;
int main(int, char**) {
	int a, b;
	cin >> a >> b;
	if (a + b == 15) {
		cout << '+' << endl;
	} else if (a * b == 15) {
		cout << '*' << endl;
	} else {
		cout << 'x' << endl;
	}
	return 0;
}
