#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Введите время суток: " << endl;
    cin >> a;

    if(a >= 0 && a < 6) {
        cout << "Ночь" << endl;
    }
    else if(a >= 6 && a < 12) {
        cout << "Утро" << endl;
    }
    else if(a >= 12 && a < 18) {
        cout << "День" << endl;
    }
    else if(a >= 18 && a < 24) {
        cout << "Вечер" << endl;
    }
    else {
        cout << "Ошибка" << endl;
    } 
    return 0;
}