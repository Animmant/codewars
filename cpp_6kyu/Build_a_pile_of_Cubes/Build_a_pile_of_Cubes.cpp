#include <cmath>


class ASum{
public:
    static long long findNb(long long m)
    {
        // a^3 + (a-1)^3 + (a-2)^3 + ... + 1^3 = m = s^2= (n * (n + 1) / 2)^2
        long long D = 1 + 8 * sqrt(m); // n^2 + n -2 * sqrt(m) = 0
        if (D < 0) return -2;
        long long n = (-1 + sqrt(D)) / 2;
        long long total = (n * (n + 1) / 2) * (n * (n + 1) / 2);
        if (total == m) {
            return n;
        }
        return -1;
    }
};

#include <iostream>

int main()
{
    std::cout << ASum::findNb(1071225) << std::endl;          // Outputs: 45
    std::cout << ASum::findNb(24723578342962) << std::endl;   // Outputs: -1
    std::cout << ASum::findNb(135440716410000) << std::endl;  
    std::cout << ASum::findNb(40539911473216) << std::endl;  
    std::cout << ASum::findNb(26825883955641) << std::endl;  

    return 0;
}