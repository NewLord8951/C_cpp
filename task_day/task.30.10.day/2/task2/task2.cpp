#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cout << "Введите трёхзначное число a: " << endl;
    cin >> a;
    if(a > 99 && a < 1000) {
        string b = to_string(a);
        char c = b[0];
        char d = b[2];
        if(c == d) {
            cout << "Да" << endl;
        }
        else {
            cout << "Нет" << endl;
        }
    }
    else {
        cout << "Ввдеите трёхзначное число" << endl;
    }
    return 0;
}