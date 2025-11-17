#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ввдеите размер массива: " << endl;
    cin >> n;
    vector<int> num(n);
    

    for(int i = 0; i < n; i++) {
        cout << "Введите символ массива: " << endl;
        cin >> num[i];
    }

    for(int c = 0; c < n; ++c) {
        cout << "Елементы первого массива " << num[c] << " " << endl;
    }

    int k;
    cout << "Введите индекс элемента который нужно удалить" << endl;
    cin >> k;

    if(k >= 0 && k < n) {
        for(int j = k; j < n - 1; ++j) {
            num[j] = num[j + 1];
        }
        n--;
    }

    for(int d = 0; d < n; ++d) {
        cout << "Елементы второго массива " << num[d] << " " << endl;
    }

    return 0;
}