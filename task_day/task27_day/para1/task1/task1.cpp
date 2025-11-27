#include <iostream>
using namespace std;

bool calculatesquare(int num) {
    if(num > 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int a;
    cout << "Введите число: " << endl;
    cin >> a;
    cout << calculatesquare(a) << endl;
    return 0;
}