#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Введите день недели в виде числа: " << endl;
    cin >> a;

    switch(a) {
        case 1: {
            a == 1;
            cout << "Понедельник" << endl;
            break;
        }
        case 2: {
            a == 2;
            cout << "Вторник" << endl;
            break;
        }
        case 3: {
            a == 3;
            cout << "Среда" << endl;
            break;
        }
        case 4: {
            a == 4;
            cout << "Четверг" << endl;
            break;
        }
        case 5: {
            a == 5;
            cout << "Пятница" << endl;
            break;
        }
        case 6: {
            a == 6;
            cout << "Суббота" << endl;
            break;
        }
        case 7: {
            a == 7;
            cout << "Воскресенье" << endl;
            break;
        }
        default: {
            cout << "Ошибка" << endl;
        }
    }

    return 0;
}