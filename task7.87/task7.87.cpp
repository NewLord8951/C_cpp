#include <iostream>

int main() {
    int n;
    int whi_0 = 0;
    std::cout << "Ввдеите натуральное число n:" << std::endl;
    std::cin >> n;

    int i;
    std::cout << "Ввдеите натуральное число i:" << std::endl;
    std::cin >> i;

    int b;
    std::cout << "Ввдеите числа b: " << std::endl;

    while(true) {
        whi_0++;
        std::cin >> b;
        if(whi_0 == n) {
            break;
        }
    }

    int whi_1 = 0;
    int sum = 0;

    while(true) {
        whi_1++;
        if(whi_1 == i + 1) {
            break;
        }

        sum += b;

    }

    int p;
    std::cout << "Ввдеите натуральное число p:" << std::endl;
    std::cin >> p;

    if(p < sum) {
        std::cout << "Число: " << p << " меньше суммы: " << sum << std::endl; 
    }

    if(p > sum) {
        std::cout << "Число: " << p << " больше суммы: " << sum << std::endl;
    }

    if(p == sum) {
        std::cout << "Число: " << p << " равна сумме: " << sum << std::endl;
    }

    return(0);
}