#include <iostream>
using namespace std;

int main() {
    int endm;
    cout << "Ввдедите конец массива: " << endl;
    cin >> endm;
    int num[endm];
    int index1 = 0;
    int index2 = 0;
    
    for(int i = 0; i < endm; i++) {
        cout << "Введите число массива:" << endl;
        cin >> num[i];
    }

    int min = num[0];
    int max = num[0];

    for(int j = 0; j < endm; j++) {
        if(num[j] < min) {
            min = num[j];
            index1 = j;
        }
        if(num[j] > max) {
            max = num[j];
            index2 = j;
        }
    }

    cout << min << " " << index1 + 1 << endl;
    cout << max << " " << index2 + 1 << endl;

    return 0;
}