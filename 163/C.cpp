#include <bits/stdc++.h>

int main(int, char**) {
	int64_t N, A;
	std::cin >> N;
	std::vector<int> boss(N, 0);
	for (int i=0; i<N-1; i++) {
		std::cin >> A;
		boss.at(A-1) =boss.at(A-1)+1;
	}
	for (int i=0; i<N; i++) {
		std::cout << boss.at(i) << std::endl;
        }

	return 0;
}
