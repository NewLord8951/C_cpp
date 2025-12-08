#include <iostream>
using namespace std;

struct point {
    int x;
    int y;
};

int printpoint(int x, int y) {
    point a;
    a.x = x;
    a.y = y;
    cout << a.x << " " << a.y << endl;
    return x, y;
}

int main() {
    int x;
    cout << "Введите координату x: " << endl;
    cin >> x;
    int y;
    cout << "Введите координату y: " << endl;
    cin >> y;
    printpoint(x , y);
    return 0;
}