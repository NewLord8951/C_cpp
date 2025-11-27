#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cout << "Введите сторону треугольника a: " << endl;
    cin >> a;
    
    int b;
    cout << "Введите сторону треугольника b: " << endl;
    cin >> b;

    int c;
    cout << "Введите сторону треугольника c : " << endl;
    cin >> c;

    if(a == b && a == c && b == c) {
        cout << "Треугольник равностороний" << endl;
    }
    else if(a == b || a == c || b == c) {
        cout << "Треугольник равнобедренный" << endl;
    }
    else if(a != b && a != c && b != c) {
        cout << "Треугольник разностороний" << endl;
    }
    else{
        cout << "Это не треугольник" << endl;
    }

    return 0;
}