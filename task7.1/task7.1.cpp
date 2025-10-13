#include <iostream>

int main() {
    int a = 100;
    while(a < 199) {
        a++;
        if(a % 3 == 0) {
            std::cout << "Числа деляющиеся на 3 от 100 до 200: " << a << std::endl;
        }
    }
    return(0);
}