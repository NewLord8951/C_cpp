#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    double a;
    cout << "Введите дробное число a: " << endl;
    cin >> a;
    double aa = a * 100;
    int aaa = (int)aa;

    string b = to_string(aaa);
    reverse(b.begin(), b.end());
    char c = b[0];
    char d = b[1];

    cout << d << c << endl;
    return 0;
}