#include <tuple>
#include <string>
#include <functional>

int main()
{
  // 渡した値からtupleを構築
  std::tuple<int, char, const char*> t1 = std::make_tuple(1, 'a', "Hello");

  // tupleのコンストラクタによってconst char*をstd::stringに型変換
  std::tuple<int, char, std::string> t2 = std::make_tuple(1, 'a', "Hello");

  int a = 1;
  char b = 'b';
  std::string c = "hello";

  // 変数のコピーからtupleを構築
  std::tuple<int, char, std::string> t3 = std::make_tuple(a, b, c);

  // 変数の一部を参照と見なしてtupleを構築
  std::tuple<int, char&, const std::string&> t4 = std::make_tuple(a, std::ref(b), std::cref(c));
}

