#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Ввдеите число a: " << endl;
    cin >> a;
    int i = 0;

    do {
        cout << a % 10;
        a /= 10;
    } while(a != 0);

    cout << a << endl;

    return 0;
}
