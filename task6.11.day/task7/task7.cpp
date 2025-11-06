#include <iostream>
using namespace std;

int main() {
    double a;
    cout << "Введите цену: " << endl;
    cin >> a;

    if(a < 1000) {
        cout << "Нет скидки, с вас:" << a << "Руб" << endl;
    }
    else if(a >= 1000 && a < 5000) {
        cout << "Скидка 5%, с вас:" << a * 0.95 << "Руб" << endl;
    }
    else if(a >= 5000 && a < 10000) {
        cout << "Скидка 10%, с вас:" << a * 0.9 << "Руб" << endl;
    }
    else if(a > 10000) {
        cout << "Скидка 15%, с вас:" << a * 0.85 << "Руб" << endl;
    }
    else {
        cout << "Ошибка" << endl;
    } 
    return 0;
}