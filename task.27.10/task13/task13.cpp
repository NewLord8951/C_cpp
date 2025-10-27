#include <iostream>
#include <exception>
#include <cmath>
using namespace std;

int main() {
    try{
        double a;
        cout << "Ввдеите число a: " << endl;
        cin >> a;

        double b;
        cout << "Ввдеите число b: " << endl;
        cin >> b;

        double c;
        cout << "Ввдеите число c: " << endl;
        cin >> c;

        double p = (a + b + c);
        double p_0 = p * 0.5;
        double s = sqrt(p * (p - a) * (p - b) * (p - c));
        double d = sqrt(pow(a, 2) + pow(b, 2));

        cout << "Площадь = " << s << endl;
        cout << "Периметр = " << p << endl;
        cout << "Гипотенуза = " << d << endl;
    }
    catch(exception e) {
        cout << "Ошибка" << endl;
    }

    return(0);
}
