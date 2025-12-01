#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите размер массива: " << endl;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cout << "Введите элемент массива: " << endl;
        cin >> a[i];
    }
    int x;
    cout << "Введите число: " << endl;
    cin >> x;
    int k;
    cout << "Введите позицию сдвига: " << endl;
    cin >> k;
    int* ar = new int[n + 1];
    for(int i = 0; i < n + 1; i++) {
       if(i == k) {
        ar[i] = x;
       }
       else if (i > k){
        ar[i] = a[i - 1];
       }
       else {
        ar[i] = a[i];
       }
    }
    for(int i = 0; i < n + 1; i++) {
        cout << ar[i] << " " << endl;
    }

    delete[] ar;
    return 0;
}