#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите число: " << endl;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 10; j++) {
            cout << i << " * " << j << " = " << i * j << endl; 
        }
    }
    return 0;
}