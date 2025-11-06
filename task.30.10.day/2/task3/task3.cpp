#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Введите двухзначное число a: " << endl;
    cin >> a;

    int x;
    cout << "Введите число x: " << endl;
    cin >> x;

    if(a > 9 && a < 100) {
        int a0 = a / 10;
        int a1 = a % 10;

        if(a0 + a1 > 10) {
            cout << "а) Да" << endl;
        }
        else {
            cout << "а) Нет" << endl;
        }

        if(a0 + a1 > x) {
            cout << "б) Да" << endl;
        }
        else {
            cout << "б) Нет" << endl;
        }

        if(a0 + a1 == 6) {
            cout << "в) Да" << endl;
        }
        else {
            cout << "в) Нет" << endl;
        }

        if(a0 > a1) {
            cout << "г) Да" << endl;
        }
        else {
            cout << "г) Нет" << endl;
        }

        if(a0 == 4 || a0 == 7 || a1 == 4 || a1 == 7) {
            cout << "д) Да" << endl;
        }
        else {
            cout << "д) Нет" << endl;
        }

        if(a1 == 5) {
            cout << "е) Да" << endl;
        }
        else {
            cout << "е) Нет" << endl;
        }
    }
    else {
        cout << "Это не двухзначное число" << endl;
    }
    return 0;
}