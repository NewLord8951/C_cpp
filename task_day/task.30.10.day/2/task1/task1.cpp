#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Ввдеиите число a: " << endl;
    cin >> a;

    int b;
    cout << "Ввдеиите число b: " << endl;
    cin >> b;

    int c;
    cout << "Ввдеиите число c: " << endl;
    cin >> c;

    if(a >= 0) {
        if(b >= 0) {
            if(c >= 0) {
                cout << a + b + c << endl;
            }
            else {
                cout << a + b << endl;
            }
        }
        else if(c >= 0) {
            cout << a + c << endl;
        }
        else {
            cout << a << endl;
        }
    }
    else if(b >= 0) {
        if(c >= 0) {
            cout << b + c << endl;
        }
        else {
            cout << b << endl;
        }
    }
    else if(c >= 0) {
        cout << c << endl;
    }
    else {
        cout << "Все числа отрицательные" << endl;
    }

    return 0;
}