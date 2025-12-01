#include <iostream>
using namespace std;

int main() {
    int stopmas;
    cout << "Введите размер массива: " << endl;
    cin >> stopmas;
    int mas[stopmas];
    int mas0;
    for(int i = 0; i != stopmas; i++) {
        cout << "Введите элемент массива" << endl;
        cin >> mas[i];
        mas0 = mas[i];
    }
    int j = 0;
    for(char i : mas) {
        if(i < mas0) {
            mas0 = i;
            ++j;
        }
    }
    cout <<  "Число: " << mas0 << " " << "Индекс: " << j << endl;
    return 0;
}