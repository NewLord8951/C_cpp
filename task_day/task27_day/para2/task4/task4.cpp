#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[8];
    for(int i = 0; i < 8; i++) {
        cout << "Ввдеите массив: " << endl;
        cin >> a[i];
    }
    reverse(begin(a), end(a));  
    cout << *a << endl;
    return 0;
}