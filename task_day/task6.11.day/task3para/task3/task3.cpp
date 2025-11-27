#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Выберите блюдо: а(1) б(2) в(3) г(4) Вкусные блюда??? " << endl;
    cin >> a;

    switch(a) {
        case 1: {
            a == 1;
            cout << "Стоит ы" << endl;
            break;
        }
        case 2: {
            a == 2;
            cout << "Стоит ъ" << endl;
            break;
        }
        case 3: {
            a == 3;
            cout << "Стоит ь" << endl;
            break;
        }
        case 4: {
            a == 4;
            cout << "Стоит стоит брать брат)" << endl;
            break;
        }
        default: {
            cout << "Ошибка" << endl;
        }
    }

    return 0;
}