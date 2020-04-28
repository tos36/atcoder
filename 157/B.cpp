#include <bits/stdc++.h>

int main(int, char**) {
	std::vector<int> bingo(9, 0);
	for (int i=0; i<9; i++) {
		std::cin >> bingo.at(i);
	}

	int N;
	std::cin >> N;
	int b;
	for (int i=0; i<N; i++) {
		std::cin >> b;
		auto itr = std::find(bingo.begin(), bingo.end(), b);
		if (itr != bingo.end()){
			*itr = 0;
		}
	}
	for (int i=0; i<3; i++) {
		if (bingo.at(3*i+0) + bingo.at(3*i+1) + bingo.at(3*i+2) == 0) {
			std::cout << "Yes" <<std::endl;
			return 0;
		} else if (bingo.at(i+0) + bingo.at(i+3) + bingo.at(i+6) == 0) {
			std::cout << "Yes" <<std::endl;
			return 0;
		}
	}
	if (bingo.at(0) + bingo.at(4) + bingo.at(8) == 0 || bingo.at(2) + bingo.at(4) + bingo.at(6) == 0){    
                        std::cout << "Yes" <<std::endl;
                        return 0;
	}

        std::cout << "No" <<std::endl;
	return 0;
}
