#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Введите число: " << endl;
    cin >> a;

    if(a % 2 == 1) {
        cout << "Нечёиное" << endl;
    }
    else {
        cout << "Чётное или 0" << endl;
    }
    return 0;
}