#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cout << "Введите цены: " << endl;
    cin >> a >> b >> c;

    int d = max({a, b, c});
    cout << "Стоимость телефона: " << d << endl;
    return 0;
}