

#include <iostream>

int main() {
    int numbers[] = {10, 21, 100};
    for (int number : numbers) {
        int result = solution(number);
        std::cout << "Input: " << number << " Output: " << result << std::endl;
    }

    return 0;
}