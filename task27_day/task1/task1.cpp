#include <iostream>
using namespace std;

bool ispositive(int num) {
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
    cout << ispositive(a) << endl;
    return 0;
}