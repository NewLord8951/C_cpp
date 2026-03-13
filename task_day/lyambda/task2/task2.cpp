#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Введите a" << endl;
    cin >> a;
    int b;
    cout << "Введите b" << endl;
    cin >> b;
    auto c{[](int a, int b){return a + b;}};
    cout << c(a, b) << endl;
    return 0;
}