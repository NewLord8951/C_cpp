#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    cout << "Ввдедите N-ое число: " << endl;
    cin >> a;
    cout << "   " << endl;
    int b;
    int i = 0;
    int c = 1;
    
    while(i < a) {
        i++;
        double f = (1 + sqrt(5)) / 2;
        double fi = (pow(f, i) - pow(-f, -i)) / sqrt(5);
        cout << fi << endl;
    }
    return 0;
}
