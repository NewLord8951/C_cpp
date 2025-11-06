#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Введите год: " << endl;
    cin >> a;

    if(a % 4 == 0) {
        cout << "Да, является високосным" << endl;
    }
    else{
        cout << "Нет, не является високосным" << endl;
    }

    return 0;
}