#include <iostream>
#include <exception>
#include <cmath>
using namespace std;

int main() {
    try{
        int num;
        cout << "Ввдеите число n: " << endl;
        cin >> num;

        cout << "Квадрат, куп и пятая степень: " << pow(num, 2) << " " << pow(num, 3) << " " << pow(num, 5) << endl; 
    }
    catch(exception e) {
        cout << "Ошибка" << endl;
    }

    return(0);
}
