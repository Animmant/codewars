#include <iostream>
#include <stdio.h>
#include <string>

std::string bool_to_word(bool value){
  return (value == true) ? "Yes" : "No";
}

#define What std::string
#define is
#define this bool_to_word(bool value)
#define I return
#define dont (value ? "Yes" : "No")
#define know

What is this{
  I dont know;
}

int main()
{
  std::cout << bool_to_word(true) << std::endl;  // Output: Yes
  std::cout << bool_to_word(false) << std::endl; // Output: No
  return 0;
}