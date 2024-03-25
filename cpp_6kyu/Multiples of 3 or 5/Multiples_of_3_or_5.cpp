int sum_multiples(int number, int n) {
    int amount_multiples = (number) / n; 
    int sum_multiples = n * amount_multiples * (amount_multiples + 1) / 2; // 3, 6, ... 99 = 3(1, 2, .. 33) = 3*34*33/2
    return sum_multiples;
}

int solution(int number) {
    if(number <= 0) return 0; // the number of multiples below 'number'
    return sum_multiples(number-1, 3) + sum_multiples(number-1, 5) - sum_multiples(number-1, 15);
}

#include <iostream>

int main() {
    int numbers[] = {10, 21, 100};
    for (int number : numbers) {
        int result = solution(number);
        std::cout << "Input: " << number << " Output: " << result << std::endl;
    }

    return 0;
}
