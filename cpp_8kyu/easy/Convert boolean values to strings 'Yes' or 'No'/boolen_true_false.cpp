#include <iostream>
#include <string>

std::string bool_to_word(bool value) {
  return value ? "Yes" : "No";
}

int main() {
  std::cout << bool_to_word(true) << std::endl;  // Output: Yes
  std::cout << bool_to_word(false) << std::endl; // Output: No
  return 0;
}
