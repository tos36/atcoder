#include <bits/stdc++.h>

int main(int, char**) {
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	int t = (c + (b - 1)) / b;
	int k = (a + (d - 1)) / d;
	if (t <= k) {
		std::cout << "Yes" << std::endl;
	} else {
		std::cout << "No" << std::endl;
	}
	return 0;
}
