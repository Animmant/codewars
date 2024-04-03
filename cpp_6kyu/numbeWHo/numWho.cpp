#include <string>
#include <vector>

std::string likes(const std::vector<std::string>& names) {
    std::string completionRow = " likes this";
    switch (names.size()) {
        case 0:
            return "no one" + completionRow; // like
        case 1:
            return names[0] + completionRow;
        case 2:
            return names[0] + " and " + names[1] + " like this";
        case 3:
            return names[0] + ", " + names[1] + " and " + names[2] + " like this";
        default:
            return names[0] + ", " + names[1] + " and " + std::to_string(names.size() - 2) + " others like this";
    }
}

#include <iostream>

int main() {
    std::vector<std::vector<std::string>> testCases = {
        {},
        {"Peter"},
        {"Jacob", "Alex"},
        {"Max", "John", "Mark"},
        {"Alex", "Jacob", "Mark", "Max"}
    };

    for (const auto& names : testCases) {
        std::cout << "Input: ";
        for (const auto& name : names) std::cout << name << " ";
        std::cout << "\nOutput: " << likes(names) << std::endl;
    }

    return 0;
}
