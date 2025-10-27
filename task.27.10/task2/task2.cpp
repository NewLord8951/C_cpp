#include <iostream>
#include <exception>
using namespace std;

int main() {
    try{
        int n;
        cout << "Ввдеите число n: " << endl;
        cin >> n;

        cout << "Этаж квартиры: " << (n / 12) + 1 << endl; 
    }
    catch(exception e) {
        cout << "Ошибка" << endl;
    }

    return(0);
}