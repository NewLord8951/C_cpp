#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double a, b, c;
    cout << "Введите цены: " << endl;
    cin >> a >> b >> c;

    double d = max({a, b, c});
    cout << "Стоимость телефона: " << d << endl;
    return 0;
}