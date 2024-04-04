#include <vector>

using namespace std;

class RemovedNumbers
{
public:
	static vector<vector<long long>> removNb(long long n){
        long long sum = n * (n + 1) / 2;
        vector<vector<long long>> result;
        for (int a = 1; a <= n; a++) {
            long long b = (sum - a) / (a + 1); // sum - a - b = a *b ; (a+1)b = sum - a; b = (sum - a) / (a + 1);
            if (a * b + a + b == sum && b <= n) {
                result.push_back({a, b});
            }}
        return result;
    }
};


#include <iostream>

int main() {
    auto result = RemovedNumbers::removNb(26);
    for (auto &pair: result) {
        std::cout << pair[0] << " " << pair[1] << std::endl;
    }

    auto result1 = RemovedNumbers::removNb(100);
    for (auto &pair: result1) {
        std::cout << pair[0] << " " << pair[1] << std::endl;
    }

    auto result2 = RemovedNumbers::removNb(101);
    for (auto &pair: result2) {
        std::cout << pair[0] << " " << pair[1] << std::endl;
    }


    return 0;
}