#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Введите переменую a: " << endl;
    cin >> a;
    int b;
    cout << "Введите переменую b: " << endl;
    cin >> b;
    int* a_0 = &a;
    int* b_0 = &b;
    int c = *a_0;
    *a_0 = *b_0;
    *b_0 = c;
    cout << a << " " << b << endl;
    return 0;
}