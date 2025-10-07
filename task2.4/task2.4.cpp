#include <iostream>
#include <iomanip>

int main() {
    int m;
    std::cout << "Введите расстояние в метрах: " << std::endl;
    std::cin >> m;

    int rounded = 2;
    double km = m / 1000;
    std::cout << std::fixed << "Число в километрах: " << std::setprecision(rounded) << km << std::endl;

    return(0);
}