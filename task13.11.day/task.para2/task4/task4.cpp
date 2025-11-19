#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> num(12);

    for(int vvod = 0; vvod < 12; vvod++) {
        cout << "Ввдеите элемиент массива (нужны и нули тоже): " << endl;
        cin >> num[vvod];
    }

    for(int v1 = 0; v1 < 12; v1++) {
        cout << "Первый массив: " << num[v1] << " " << endl;
    }

    int nul = 0;
    cout << " " << endl;
    
    auto a = remove(num.begin(), num.end(), nul);
    num.erase(a, num.end());
    num.resize(12);

    for(int v2 = 0; v2 < 12; v2++) {
        cout << "Второй массив: " << num[v2] << " " << endl;
    } 

    return 0;
}