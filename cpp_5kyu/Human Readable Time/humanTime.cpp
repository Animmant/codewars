function humanReadable (seconds) {
  return '';
}

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