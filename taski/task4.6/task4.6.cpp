#include <iostream>

int main() {
    double num1;
    std::cout << "Введите первое вещественное число: " << std::endl;
    std::cin >> num1;

    double num2;
    std::cout << "Введите второе вещественное число: " << std::endl;
    std::cin >> num2;

    if (num1 > num2) {
        std::cout << "Большее число: " << num1 << std::endl;
        std::cout << "Меньшее число: " << num2 << std::endl;
    } else {
        std::cout << "Большее число: " << num2 << std::endl;
        std::cout << "Меньшее число: " << num1 << std::endl;
    }
    return(0);
}
