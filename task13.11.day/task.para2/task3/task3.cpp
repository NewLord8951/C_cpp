#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> num(8);

    for(int i = 0; i < 8; i++) {
        cout << "Введите элемент массива: " << endl;
        cin >> num[i];
    }

    for(int c = 0; c < 8; c++) {
        cout << "Первый массив: " << num[c] << " " << endl;
    }

    int sdv;
    cout << "Ввдеите количество позиций для сдвига: " << endl;
    cin >> sdv;

    num.resize(8 + sdv);

    rotate(num.begin(), num.begin() + sdv, num.end());

    for(int j = 0; j < 8 + sdv; j++) {
        cout << "Второй массив: " << num[j] << " " << endl;
    }
    
    return 0;
}