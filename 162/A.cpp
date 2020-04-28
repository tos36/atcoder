#include <bits/stdc++.h>

int main(int, char**) {
	int N;
	std::cin >> N;
	int d = 100;
	for (int i=0; i<3; i++) {
		if (N/d == 7) {
			std::cout << "Yes" << std::endl;
			return 0;
		} else {
			N = N%d;
			d = d/10;
		}
	}
	std::cout << "No" << std::endl;
	return 0;
}
