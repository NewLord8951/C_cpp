#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cout << "Ввдеите число n: " << std::endl;
    std::cin >> n;

    int i = 1;
    int i2 = std::pow(i, 2);

    while(i2 < n) {
        i++;
        std::cout << "а): " << i2 << std::endl;
        i2 = std::pow(i, 2);
    }

    double x = std::pow(n, 0.5);
    double y = std::round(x + 1);
    std::cout << "б): " << y << std::endl;

    return(0);
}
