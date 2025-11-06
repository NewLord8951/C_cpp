#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Введите первое число: " << endl;
    cin >> a;
    
    int b;
    cout << "Введите второе число: " << endl;
    cin >> b;

    int op;
    cout << "Введите +(1) или -(2) или *(3) или /(4) (поставьте цифры): " << endl;
    cin >> op;

    switch(op) {
        case 1:
            op == 1;
            cout << a + b << endl;
            break;
        case 2:
        op == 2;
            cout << a - b << endl;
            break;
        case 3:
            op == 3;
            cout << a * b << endl;
            break;
        case 4:
            op == 4;
            cout << a / b << endl;
            break;
        default: {
            cout << "Ошибка" << endl;
            break;
        }
            
    }
    return 0;
}