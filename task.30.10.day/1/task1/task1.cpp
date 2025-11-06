#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Ввдеите число a и b: " << endl;
    cin >> a >> b;

    double c = 1 / (1 + ((a + b) / 2));
    cout << c << endl;
    return 0;
}