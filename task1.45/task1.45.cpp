#include <iostream>
#include <iomanip>

int main() {
    int num1;
    std::cout << "Ввдеите первое число: " << std::endl;
    std::cin >> num1;

    int num2;
    std::cout << "Ввдеите второе число: " << std::endl;
    std::cin >> num2;

    int sum = num1 + num2;
    std::cout << "Сумма чисел: " << sum << std::endl;

    int raz = num1 - num2;
    std::cout << "Разность чисел: " << raz << std::endl;

    int proiz = num1 * num2;
    std::cout << "Произведение чисел: " << proiz << std::endl;

    int rounded = 2;
    double chast = num1 / num2;
    std::cout << std::fixed << "Частное чисел: " << std::setprecision(rounded) << chast << std::endl;

    return(0);
}
