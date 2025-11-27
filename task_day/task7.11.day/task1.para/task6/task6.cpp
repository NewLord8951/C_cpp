#include <iostream>
using namespace std;

int main() {
    int a;
    int i = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    cout << "Ввдеите числа и в конце напишите 0: " << endl;
    while(true) {
        cin >> a;
    
        if(a == 0) {
            break;
        }
    
        i++;
        b += a;
    
        if(c < a) {
            c = a;
        }

        if(d < a) {
            d = a;
        }

        cout << "a == " << a << endl;
        
    }

    cout << "Количество цифр: " << i << endl;
    cout << "Среднее число: " << b / i << endl;
    cout << "Максимальное значение: " << c << endl;
    cout << "Минимальное значение: " << d << endl;

    return 0;
}
