#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Введите размерность массива: " << endl;
    cin >> n;
    int k;
    cout << "Ввдеите индекс сдвига: " << endl;
    cin >> k;

    vector<int> mass(n);
    for(int i = 0; i != n; i++) {
        cout << "Введите массив: " << endl;
        cin >> mass[i];
    }

    cout << " " << endl;
    mass.insert(mass.begin(), mass.begin() + k - 1, mass.end());

    for(int i = 0; i != n; i++) {
        cout << mass[i] << " " << endl;
    }
    return 0;
}