#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Ввдеиите число x: " << endl;
    cin >> x;
    if(x > 9 && x < 100) {
        int a = x / 10;
        int b = x % 10;
        cout << a << " " << b << endl;
    }
    else {
        cout << "Должно быть двухзначное число" << endl;
    }
    return 0;
}