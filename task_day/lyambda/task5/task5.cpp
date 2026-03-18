#include <iostream>
using namespace std;

int main() {
    int age = 15;
    auto lymbda{[age](){return(age);}};
    cout << "Лёня столько минут не бухал:( " << lymbda() << endl;
    return 0;
}