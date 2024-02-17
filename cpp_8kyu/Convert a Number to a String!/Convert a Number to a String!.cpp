#include <iostream>
#include <vector>

int positive_sum(const std::vector<int> &arrNumbers) {
    int sumNonNegative_Numbers = 0;
    for (int i = 0; i < arrNumbers.size(); i++){
        if (arrNumbers[i] > 0) 
            sumNonNegative_Numbers += arrNumbers[i];
    }
    return sumNonNegative_Numbers;
}

int main()
{
    // array initialization
    std::vector<int> arrTransactions{1,-2,3,4,5};

    int sum_income = positive_sum(arrTransactions);
    std::cout << "Your sum: " << sum_income << std::endl;
    return 0;
}
