#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Ввдеите число: " << endl;
    cin >> a;
    for(int i = 0; i < 11; ++i) {
        cout << a << " * " << i << " = " << a * i << endl;
    }
    return 0;
}