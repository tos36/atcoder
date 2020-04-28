#include <bits/stdc++.h>

int main(int, char**) {
	int S, W;
	std::cin >> S >> W;
	if (W >= S) {
		std::cout << "unsafe" << std::endl;
	} else {
		std::cout << "safe" << std::endl;
	}
	return 0;
}
