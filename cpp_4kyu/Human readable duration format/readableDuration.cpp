#include <string>

std::string format_duration(int seconds) {
    if (seconds == 0) {
        return "now";
    }

    int time_units[] = { 60, 60, 24, 365 };
    std::string unit_names[] = { "second", "minute", "hour", "day", "year" };

    int values[5] = { 0 };
    for (int i = 0; i < 4; ++i) {
        values[i] = seconds % time_units[i];
        seconds /= time_units[i];
    }
    values[4] = seconds;

    std::string result;
    for (int i = 4; i >= 0; --i) {
        if (values[i] > 0) {
            if (!result.empty()) {
                result += (i == 0 ? " and " : ", ");
            }
            result += std::to_string(values[i]) + " " + unit_names[i] + (values[i] > 1 ? "s" : "");
        }
    }

    return result;
}

#include <iostream>

int main() {
    auto result714 = format_duration(3665);
    std::cout << result714 << std::endl;

    auto resultmany = format_duration(714);
    std::cout << resultmany << std::endl;

    return 0;
}