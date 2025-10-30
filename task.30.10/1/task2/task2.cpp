#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double a, b, c;
    cout << "Введите цены: " << endl;
    cin >> a >> b >> c;

    double d = min({a, b, c});
    cout << "Денег отсалось: " << 1000 - d << endl;
    return 0;
}