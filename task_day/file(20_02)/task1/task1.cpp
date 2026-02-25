#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream a("file.txt");
    int q;
    for(int i = 0; i < 10; i++) {
        cout << "Введите 10 чисел: " << endl;
        cin >> q;
        a << q << endl;
    }
    cout << " " << endl;
    a.close();
    cout << endl;
    ifstream c("file.txt");
    int b;
    int d = 0;
    int e = 10000;
    int f = -1;
    while(c >> b) {
        cout << b << endl;
        d += b;
        if(e > b) {
            e = b;
        }
        if(f < b) {
            f = b;
        }
    }
    cout << d << endl;
    cout << d / 10 << endl;
    cout << e << endl;
    cout << f << endl;
    c.close();
    return 0;
}
// Пример вывода:
// Числа из файла: 5 12 8 3 15 7 9 11 4 6
// Сумма: 80
// Среднее: 8
// Максимум: 15
// Минимум: 3
