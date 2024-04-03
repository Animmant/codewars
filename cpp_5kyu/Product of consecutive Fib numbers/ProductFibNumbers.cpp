#include <vector>
typedef unsigned long long ull;
class ProdFib
{
public:
  static std::vector<ull> productFib(ull prod){
    ull a = 0, b = 1; // f[a] f[a+1]
    while (a * b < prod) {
      ull next = a + b;
      a = b;
      b = next;
    }

    return {a, b, a * b == prod ? true : false};
  }
};


#include <iostream>

int main() {
    auto result714 = ProdFib::productFib(714);
    std::cout << "{" << result714[0] << ", " << result714[1] << ", " << (result714[2] ? "true" : "false") << "}" << std::endl;

    auto result800 = ProdFib::productFib(800);
    std::cout << "{" << result800[0] << ", " << result800[1] << ", " << (result800[2] ? "true" : "false") << "}" << std::endl;

    return 0;
}