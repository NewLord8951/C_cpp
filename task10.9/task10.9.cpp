#include <iostream>
using namespace std;

int main() {
    int x1, x2, y1, y2, z1, z2;
    cout << "Ввдеите координаты: " << endl;
    cin >> x1;
    cin >> x2;
    cin >> y1;
    cin >> y2;
    cin >> z1;
    cin >> z2;
    int p = x1 + y1 + z1 + x2 + y2 + z2;
    cout << "Периметр=" << p << endl;
    return 0;
}