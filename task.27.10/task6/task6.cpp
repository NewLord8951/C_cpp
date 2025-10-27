#include <iostream>
#include <exception>
#include <cmath>
using namespace std;

int main() {
    try{
        int x;
        cout << "Ввдеите x: " << endl;
        cin >> x;

        int a = (7 * pow(x, 2)) - (3 * x) + 6;

        cout << "Число a = " << a << endl;
    }
    catch(exception e) {
    cout << "Ошибка" << endl;
    }

    return(0);
}