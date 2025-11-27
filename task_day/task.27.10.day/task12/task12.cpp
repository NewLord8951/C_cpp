#include <iostream>
#include <exception>
#include <cmath>
using namespace std;

int main() {
    try{
        float n0;
        cout << "Ввдеите число n0: " << endl;
        cin >> n0;

        float n1;
        cout << "Ввдеите число n1: " << endl;
        cin >> n1;

        float n2;
        cout << "Ввдеите число n2: " << endl;
        cin >> n2;

        float n3;
        cout << "Ввдеите число n3: " << endl;
        cin >> n3;

        float n4;
        cout << "Ввдеите число n4: " << endl;
        cin >> n4;

        cout << round(n0) << endl;
        cout << round(n1) << endl;
        cout << round(n2) << endl;
        cout << round(n3) << endl;
        cout << round(n4) << endl;
    }
    catch(exception e) {
        cout << "Ошибка" << endl;
    }

    return(0);
}
