#include <string>

std::string no_space(const std::string& x)
{
  std::string result = x;
  for (char symbol : x) {
      if(symbol != " "){
        result_symbol = symbol;
      }
    }
    return result;
}

int main(){
    std::string hol = "hello";
    std::cout << makeUpperCase(hol) << std::endl;
}