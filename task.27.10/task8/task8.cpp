#include <iostream>
#include <exception>
#include <cmath>
using namespace std;

int main() {
    try{
        float n;
        cout << "Ввдеите число x: " << endl;
        cin >> n;

        float x = (3 * n) - sqrt(n);
        cout << x << endl;
    }
    catch(exception e) {
        cout << "Ошибка" << endl;
    }

    return(0);
}
