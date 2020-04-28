#include <bits/stdc++.h>

int main(int, char**) {
	int A, B;
	std::cin >> A >> B;
	for (int i=1; i<=1000; i++) {
		int a = int(i * 0.08);
		int b = int(i * 0.1);
		if (a==A && b==B) {
			std::cout << i << std::endl;
			return 0;
		}
	}
	std::cout << "-1" << std::endl;
	return 0;
}
