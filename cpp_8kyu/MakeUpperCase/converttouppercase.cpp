#include <string>
#include <iostream>

std::string makeUpperCase (const std::string& input_str)
{
std::string result = input_str;
  
    for (char& c : result) {  
        if (c >= 'a' && c <= 'z') {
            c = 'A' + (c - 'a');  // Convert to uppercase
        }
    }
    return result;
}

int main(){
    std::string hol = "hello";
    std::cout << makeUpperCase(hol) << std::endl;
}