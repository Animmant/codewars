#include <cinttypes>

uint64_t descendingOrder(uint64_t a) {
    int digits[10]{0}; // Correctly sized to count occurrences of each digit (0-9)

    // Extract digits
    while(a >= 1){
        digits[a % 10]++;
        a /= 10;
    }

    // Reassemble the number
    uint64_t result = 0;
    for (int i = 9; i >= 0; i--) { // Ensuring we decrement digits[i] correctly
        while(digits[i]-- > 0){
            result = result * 10 + i;
        }
    }
    return result;
}

#include <iostream>

int main() {
    uint64_t numbers[] = {42145, 145263, 123456789};
    for (uint64_t number : numbers) {
        uint64_t result = descendingOrder(number);
        std::cout << "Input: " << number << " Output: " << result << std::endl;
    }

    return 0;
}
