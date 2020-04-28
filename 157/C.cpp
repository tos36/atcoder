#include <bits/stdc++.h>

int main(int, char**) {
	int N, M;
	std::cin >> N >> M;
	std::vector<int> S(M);
	std::vector<char> C(M);
	for (int i=0; i<M; i++) {
		std::cin >> S.at(i);
		std::cin >> C.at(i);
	}
	if (M==0) {
		if (N==1) {
			std::cout<<0<<std::endl;
		} else {
			std::cout<<std::pow(10,N-1)<<std::endl;
		}
		return 0;
	}

	for (int i=0; i<std::pow(10, N); i++) {
		std::string num = std::to_string(i);
		//std::cout << i <<std::endl;
		if (num.size() != N) continue;
		for (int j=0; j<M ; j++) {
			int s = S.at(j);
			char c = C.at(j);
			if (num[s - 1] != c) {
				break;
			}
			if (j == M - 1) {
				std::cout << i << std::endl;
				return 0;
			}
		}
	}
	std::cout << -1 << std::endl;
	return 0;
}
