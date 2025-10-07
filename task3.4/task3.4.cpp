#include <iostream>

int main() {
    bool x = true;
    bool y = true;
    bool z = false;

    bool a = !x && y;
    bool b = x || !y;
    bool c = x || y && z;

    std::cout << "а) " << a << std::endl;
    std::cout << "б) " << b << std::endl;
    std::cout << "в) " << c << std::endl;

    return(0);
}