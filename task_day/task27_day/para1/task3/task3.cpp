#include <iostream>
using namespace std;

void calculaterectangle(int dlina, int shirina) {
    int sqr = dlina * shirina;
    int per = (dlina * 2) + (shirina * 2);
    cout << sqr << " " << per;
}

int main() {
    int a;
    cout << "Введите число a: " << endl;
    cin >> a;
    int b;
    cout << "Введите число b: " << endl;
    cin >> b;
    calculaterectangle(a, b);
    return 0;
}