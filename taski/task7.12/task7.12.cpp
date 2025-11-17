#include <iostream>

int main() {
    int a = 30;
    int sum = 0;
    while(a < 100) {
        a++;
        if(a % 3 == 0) {
            if(a % 10 == 2 || a % 10 == 4 || a % 10 == 8) {
                sum += a;
            }
        }
    }

    std::cout << "Сумма: " << sum << std::endl;
    return(0);
}