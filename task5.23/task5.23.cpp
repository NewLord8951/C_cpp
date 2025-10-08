#include <iostream>

int main() {
    double num = 2.1;
    while(num < 2.9) {
        std::cout << num << std::endl;
        num += 0.1;
    }
    return(0);
}