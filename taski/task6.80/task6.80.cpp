#include <iostream>
#include <string>
#include <vector>
#include <cctype>

int main() {
    int n;
    std::cout << "Ввдеите число n: " << std::endl;
    std::cin >> n;

    std::string s = std::to_string(n);
    std::vector<int> cifra;

    for(char c : s) {
        if(std::isdigit(c)) {
            cifra.push_back(c - '0');
        }
    }

    int c_0 = 0;
    int c_9 = 0;

    for(int d : cifra) {
        if(d == 0) {
            c_0 += 1;
        }
    }

    for(int d : cifra) {
        if(d == 9) {
            c_9 += 1;
        }
    }

    if(c_0 < c_9) {
        std::cout << "9 больше чем 0" << std::endl;
    }

    if(c_0 > c_9) {
        std::cout << "0 больше чем 9" << std::endl;
    }

    if(c_0 == c_9) {
        std::cout << "0 столько же сколько и 9" << std::endl;
    }
    return(0);
}