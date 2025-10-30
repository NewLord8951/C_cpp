#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r;
    cout << "Ввдеиите радиус: " << endl;
    cin >> r;
    double v = (4 / 3) * M_PI * pow(r, 3);
    cout << "Объём: " << v << endl;
    return 0;
}