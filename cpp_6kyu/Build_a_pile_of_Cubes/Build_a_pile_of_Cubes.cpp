class ASum{
public:
    static long long findNb(long long m)
    {
        long long n = 0;
        for (long long sum = 0; sum < m; ++n)
            sum += n * n * n;
        return (n * n * n == m) ? (n - 1) : -1;
    }
};

#include <iostream>

int main()
{
    std::cout << ASum::findNb(1071225) << std::endl;          // Outputs: 45
    std::cout << ASum::findNb(91716553919377) << std::endl;   // Outputs: -1

    return 0;
}