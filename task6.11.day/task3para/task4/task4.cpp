#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Введите месяц в виде числа: " << endl;
    cin >> a;

    switch(a) {
        case 1: {
            a == 1;
            cout << "Январь" << endl;
            break;
        }
        case 2: {
            a == 2;
            cout << "Февраль" << endl;
            break;
        }
        case 3: {
            a == 3;
            cout << "Март" << endl;
            break;
        }
        case 4: {
            a == 4;
            cout << "Апрель" << endl;
            break;
        }
        case 5: {
            a == 5;
            cout << "Май" << endl;
            break;
        }
        case 6: {
            a == 6;
            cout << "Июнь" << endl;
            break;
        }
        case 7: {
            a == 7;
            cout << "Июль" << endl;
            break;
        }
        case 8: {
            a == 8;
            cout << "Август" << endl;
            break;
        }
        case 9: {
            a == 9;
            cout << "Сентябрь" << endl;
            break;
        }
        case 10: {
            a == 10;
            cout << "Октябрь" << endl;
            break;
        }
        case 11: {
            a == 11;
            cout << "Ноябрь" << endl;
            break;
        }
        case 12: {
            a == 12;
            cout << "Декабрь" << endl;
            break;
        }
        default: {
            cout << "Ошибка" << endl;
        }
    }

    return 0;
}