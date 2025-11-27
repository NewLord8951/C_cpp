#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> num(15);

    for(int i = 0; i < 15; i++) {
        cout << "Ввдеите елемент массива: " << endl;
        cin >> num[i];
    }

    int del;
    cout << "Ввдеите число для удаления " << endl;
    cin >> del;

    cout << " " << endl;

    num.erase(remove(num.begin(), num.end(), del), num.end());
 
    for (int numb : num) {
        cout << numb << " " << endl;
    }

    return 0;
}