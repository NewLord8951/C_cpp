#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a0, a1, a2, a3, a4, a5;
    cout << "Ввдеите числа" << endl;
    cin >> a0 >> a1 >> a2 >> a3 >> a4 >> a5;
    int ma = max({a0, a1, a2, a3, a4, a5});
    cout << "Максимальное число: " << ma << endl;
    int mi = min({a0, a1, a2, a3, a4, a5});
    cout << "Минимальное число: " << mi << endl;
    return 0;
}