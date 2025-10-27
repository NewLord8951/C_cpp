#include <iostream>
#include <exception>
using namespace std;

int main() {
    try{
        int n;
        cout << "Ввдеите число n: " << endl;
        cin >> n;

        int m;
        cout << "Ввдеите число m: " << endl;
        cin >> m;

        for(int i = n; i % m != 0; i++) {
            n++;
        }
        
        if(n % m == 0) { 
                cout << "Число: " << n << endl;
        }
    }
    catch(exception e) {
        cout << "Ошибка" << endl;
    }

    return(0);
}