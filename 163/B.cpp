#include <bits/stdc++.h>

int main(int, char**) {
	int64_t N, M, A;
	std::cin >> N >> M;
	for (int i; i<M; i++) {
		std::cin >> A;
		N = N - A;
		if (N < 0) {
			N = -1;
			break;
		}
	}
	std::cout << N << std::endl;
	return 0;
}
