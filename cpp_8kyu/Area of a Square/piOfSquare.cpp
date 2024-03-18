#include <iostream>
#include <cmath>

double square_area(double A) {
    double side_of_square = 2 * A / M_PI;
    double area = side_of_square * side_of_square;
    area = std::round(area * 100) / 100; // Round to 2 decimal places
    return area;
}

int main(){
    std::cout << square_area(2) <<;
}