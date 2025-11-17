#include <iostream>

int main() {
    double num;
    std::cout << "Ввдите число" << std::endl;
    std::cin >> num;

    if(num >= -5 && num <= 3) {
        std::cout << "Число принадлежит интервалу" << std::endl;
    }
    else {
        std::cout << "Число не принадлежит интервалу" << std::endl;
    }
    return(0);
}
