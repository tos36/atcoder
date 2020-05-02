#include <bits/stdc++.h>

int gcd(int a, int b) {
	if (a%b == 0) {
		return b;
	} else {
		return gcd(b, a%b);
	}
}


int main(int, char**) {
	int K;
	std::cin >> K;
	int64_t sum = 0;
	for (int i=1; i<K+1; i++) {
		for (int j=i; j<K+1; j++) {
			for (int k=j ; k<K+1; k++) {
				int64_t v = gcd(gcd(i, j), k);
				int a = 0;
				if (i==j && j==k) {
					a = 1;
				} else if (i==j || j==k) {
					a = 3;
				} else {
					a = 6;
				}
				sum += v * a;
			}
		}
	}
	std::cout << sum << std::endl;
	return 0;
}
