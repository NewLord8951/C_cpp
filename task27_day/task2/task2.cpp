#include <iostream>
#include <cmath>
using namespace std;

int calculatesquare(int num) {
    int sqr = pow(num, 2);
    return sqr;
}

int main() {
    int a;
    cout << "Введите число: " << endl;
    cin >> a;
    cout << calculatesquare(a) << endl;
    return 0;
}