#include <iostream>
#include <exception>
using namespace std;

int main() {
    try{
        float n;
        cout << "Ввдеите число n: " << endl;
        cin >> n;

        cout << n / 4 << endl; 
    }
    catch(exception e) {
        cout << "Ошибка" << endl;
    }

    return(0);
}
