#include <iostream>
using namespace std;

int main() {
    int fin;
    cout << "Введите размерномть массива: " << endl;
    cin >> fin;
    int arr[fin];
    for(int i = 0; i < fin; i++) {
        cout << "Введите массив: " << endl;
        cin >> arr[i];
    }
    int *j = arr;
    int sred = 0;
    int a = 0;
    int b = 0;
    for(char i : arr) {
        if(i < 0) {
            a++;
        }
        else if(i >= 0) {
            b++;
        }
        sred += i;
    }
    int jast = sred / fin;
    cout << "Отрицательных чисел: " << a << endl;
    cout << "Положительных чисел: " << b << endl;
    cout << "Среднее арифметичесвое: " << jast << endl;
    return 0;
}