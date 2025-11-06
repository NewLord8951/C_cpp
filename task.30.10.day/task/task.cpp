// Начало
#include <iostream>
using namespace std;

int main() {
    // Ввод a
    int a;
    cout << "Ввдеите число a: " << endl;
    cin >> a;

    // Ввод b
    int b;
    cout << "Ввдеите число b: " << endl;
    cin >> b;

    
    if(a == 0) { // a == 0?
        // да
        if(b == 0) { // b == 0?
            // да
            // Вывод "any"
            cout << "any" << endl;
        }
        else {
            // нет
            // вывод "No"
            cout << "No" << endl;
        }
    }
    else {
        // нет 
        // x=b/a
        int x = b / a;
        //Вывод x
        cout << x << endl;
    }
    // конец
    return 0;
}
