#include <map>
#include <string>

std::map<char, unsigned> count(const std::string& string) {
    std::map<char, unsigned> countSymbol;

    for (char c : string){
        countSymbol[c]++;
    }
    return countSymbol;
}

#include <iostream>

int main() {
    auto counter = count("aba");
    std::cout << "{ ";
    for (const auto& pair : counter) {
        std::cout << "'" << pair.first << "': " << pair.second << ", ";
    }
    std::cout << "}" << std::endl;

    auto emptyCounter = count("abakuska");
    std::cout << "{ ";
    for (const auto& pair : emptyCounter) {
        std::cout << "'" << pair.first << "': " << pair.second << ", ";
    }
    std::cout << "}" << std::endl;

    return 0;
}