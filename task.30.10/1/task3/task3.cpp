#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a;
    cout << "Введите число a: " << endl;
    cin >> a;

    int b = 2;
    cout << fixed << setprecision(b) << a << endl;
    return 0;
}