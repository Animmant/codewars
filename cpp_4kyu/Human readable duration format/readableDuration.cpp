#include <string>

std::string format_duration(int seconds) {
    if(seconds)



    int years = seconds / (365 * 24 * 60 * 60);
    seconds %= (365 * 24 * 60 * 60);
    int days = seconds / (24 * 60 * 60);
    seconds %= (24 * 60 * 60);
    int hours = seconds / (60 * 60);
    seconds %= (60 * 60);
    int minutes = seconds / 60;
    seconds %= 60;

    std::string sec = std::to_string(seconds % 60) + " second",
                minute = std::to_string((seconds / 60) % 60) + " minute",
                hour = std::to_string((seconds / 3600) % 60) + " hour";
    
    switch()

}

#include <iostream>

int main() {
    auto result714 = format_duration(714);
    std::cout << result714 << std::endl;

    auto resultmany = format_duration(3665);
    std::cout << resultmany << std::endl;

    return 0;
}