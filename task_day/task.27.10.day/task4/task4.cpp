#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ввдеите двухзначное число: " << endl;
    cin >> num;

    if(num < 100 && num > 9) {
        int num0 = num / 10;
        int num1 = num % 10;
        cout << "Десятков: " << num0 << " " << "Едениц: " << num1 << endl;
    }
    return(0);
}