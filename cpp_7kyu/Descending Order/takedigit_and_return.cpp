#include <iostream>
#include <cinttypes>
#include <algorithm> 

int partition(int array[], int low, int high) {
    int pivot = array[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (array[j] > pivot) { // Sort in descending order
            i++;
            std::swap(array[i], array[j]); 
        }
    }
    std::swap(array[i + 1], array[high]);
    return (i + 1);
}

void quickSort(int array[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(array, low, high);
        quickSort(array, low, pivotIndex - 1);
        quickSort(array, pivotIndex + 1, high);
    }
}

uint64_t descendingOrder(uint64_t a) {
    int digits[20]{0}; // Assuming a uint64_t number will not have more than 20 digits
    int numDigits = 0;

    // Extract digits
    while(a > 0){
        digits[numDigits++] = a % 10;
        a /= 10;
    }

    // Sort digits in descending order
    quickSort(digits, 0, numDigits - 1);

    // Reassemble the number
    uint64_t result = 0;
    for (int i = 0; i < numDigits; i++) {
        result = result * 10 + digits[i];
    }
    return result;
}

int main() {
    uint64_t numbers[] = {42145, 145263, 123456789};
    for (uint64_t number : numbers) {
        uint64_t result = descendingOrder(number);
        std::cout << "Input: " << number << " Output: " << result << std::endl;
    }

    return 0;
}
