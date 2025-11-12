#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Ввдеите число a: " << endl;
    cin >> a;
    int summ = 1;

    for(int i = 1; i < a + 1; i++) {
        summ = summ * i;
        
    }
    cout << summ << endl;
    return 0;
}
