#include <string>

std::string format_duration(int seconds) {
    if(seconds == 0){return "now";}

    std::string result;

    std::string unit_names[] = { "second", "minute", "hour", "day", "year" };
     int time_units[] = { 60, 60, 24, 365 };
    
    int values[5];
    for(int i = 0; i < 4; i++){
        values[i] = seconds % time_units[i];
        seconds /= time_units[i];
    
    }


  
    return result;

}

#include <iostream>

int main() {
    auto result714 = format_duration(714);
    std::cout << result714 << std::endl;

    auto resultmany = format_duration(3665);
    std::cout << resultmany << std::endl;

    return 0;
}