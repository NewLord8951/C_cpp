#include <iostream>
using namespace std;

int main() {
    int multiplier = 3;
    auto lymbda{[multiplier](int h){return(multiplier * h);}};
    int h0;
    cout << "Введите: " << endl;
    cin >> h0;
    cout << lymbda(h0) << endl;
    return 0;
}