#include <vector>

struct UnionFind {
	std::vector<int> par; // par[i] represents parent number of i
	std::vector<int> sizes; // sizes[i] represent size of group 

    UnionFind(int N) : par(N), sizes(N, 1){ //最初は全てが根であるとして初期化
        for(int i = 0; i < N; i++) par[i] = i;
    }

    int root(int x) { // find parent of x
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) { // xとyの木を併合
        int rx = root(x); //xの根をrx
        int ry = root(y); //yの根をry
        if (rx == ry) return; //xとyの根が同じ(=同じ木にある)時はそのまま
        if (sizes[rx] < sizes[ry]) std::swap(x, y);
        par[ry] = rx; //xとyの根が同じでない(=同じ木にない)時：yの根ryをxの根rx>につける
        sizes[rx] += sizes[ry];
    }

    bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
        return root(x) == root(y);
    }

    int size(int x) {
            return sizes[root(x)];
    }
};


int main(int, char**) {
	return 0;
}
