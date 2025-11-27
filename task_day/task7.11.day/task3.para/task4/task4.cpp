#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Ввдеите число a: " << endl;
    cin >> a;
    int i = 0;

    do {
        int j = a % 10;
        if(a % 2 != 1) {
            i++;
        }
        a /= 10;
    } while(a != 0);
    cout << "Сумма: " << i << endl;
    return 0;
}
