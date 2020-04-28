#include <bits/stdc++.h>

int main(int, char**) {
	int64_t N, A, B;
	std::cin >> N >> A >> B;
	int64_t n_blue;
	n_blue = A * (N/(A + B)) + std::min(A, N%(A + B));
	std::cout << n_blue << std::endl;
	return 0;
}
