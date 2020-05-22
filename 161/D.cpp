#include <bits/stdc++.h>

using namespace std;

int main(int, char**) {
	int k;
	cin >> k;
	queue<long long> que;
	for (int i=1; i<10; i++) {
		que.push(i);
	}
	long long n;
	for (int i=0; i<k; i++) {
		n = que.front();
		que.pop();
		if (n%10 != 0) que.push(10 * n + n%10 - 1);
		que.push(10 * n + n%10);
		if (n%10 != 9) que.push(10 * n + n%10 + 1);
	}
	cout << n << endl;
	return 0;
}
