#include <map>
#include <string>

std::map<char, unsigned> count(const std::string& string) {
    std::map<char, unsigned> countSymbol;

    for (char c : string){
        coun
    }
    return {{ 'a', 2 }, { 'b', 1 }};
}

#include <iostream>

int main() {
    auto result = countChars("aba");
    for (const auto& pair : result) {
        std::cout << "'" << pair.first << "': " << pair.second << std::endl;
    }
    return 0;
}