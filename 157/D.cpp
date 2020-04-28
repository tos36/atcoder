#include <bits/stdc++.h>

struct UnionFind {
    std::vector<int> par, sizes; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2

    UnionFind(int N) : par(N), sizes(N, 1){ //最初は全てが根であるとして初期化
        for(int i = 0; i < N; i++) par[i] = i;
    }

    int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) { // xとyの木を併合
        int rx = root(x); //xの根をrx
        int ry = root(y); //yの根をry
        if (rx == ry) return; //xとyの根が同じ(=同じ木にある)時はそのまま
	if (sizes[rx] < sizes[ry]) std::swap(x, y);
        par[ry] = rx; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
	sizes[rx] += sizes[ry];
    }

    bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }

    int size(int x) {
	    return sizes[root(x)];
    }
};

using Graph = std::vector<std::vector<int>>;

int main(int, char**) {
	int N, M, K;
	std::cin >> N >> M >> K;
	
	UnionFind tree(N);
	Graph G(N);

	for (int i=0; i<M; i++) {
		int a, b;
		std::cin >> a >> b;
		a--;
		b--;
		tree.unite(a, b);
		G[a].push_back(b);
		G[b].push_back(a);
	}

	for (int i=0; i<K; i++) {
		int c, d;
		std::cin >> c >>d;
		c--;
		d--;
		if (tree.same(c, d)) {
			G[c].push_back(d);
			G[d].push_back(c);
		}
	}

	for (int i=0; i<N; i++) {
		std::cout << tree.size(i) - G[i].size() - 1 << " ";
	}
	std::cout << std::endl;
	
	return 0;
}
