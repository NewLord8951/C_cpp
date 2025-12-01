#include <iostream>
using namespace std;

int main() {
    int stopmas;
    cout << "Введите размер массива: " << endl;
    cin >> stopmas;
    int mas[stopmas];
    int *mas0;
    for(int i = 0; i != stopmas; i++) {
        cout << "Введите элемент массива" << endl;
        cin >> mas[i];
        *mas0 = mas[0];
    }
    
    cout << *mas0 << endl;
    return 0;
}