#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ввдеите число n: " << endl;
    cin >> n;
    int a = 0;
    int b = 1;

    for(int i = 1; i < n; i++) {
        a = i + a;
        b = i * b;
    }
    cout << "Сумма: " << a << endl;
    cout << "Произведение: " << b << endl;

    return 0;
}
