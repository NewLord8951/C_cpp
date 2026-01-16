#include <iostream>
#include <string>
using namespace std;

void time(double s) {
    double minusts = s / 60; 
    cout << "Минуты: " << minusts << endl;
}

void gradus(double c) {
    double f = c * 1.8 + 32;
    cout << "Градусы Фаркнгейта: " << f << endl;
}

void mili(double km) {
    double mili = km * 0.621371;
    cout << "Мили: " << mili << endl;
}

int main() {
    double s;
    cout << "Введите секунды: " << endl;
    cin >> s;
    double c;
    cout << "Введите градусы цельсия: " << endl;
    cin >> c;
    double km;
    cout << "Введите Километры: " << endl;
    cin >> km;
    time(s);
    gradus(c);
    mili(km);
    return 0;
}
