#include <iostream>
using namespace std;

int main() {
    string words;
    cout << "Введите предложение на английском" << endl;
    cin >> words;

    for(char c : words) {
        if(c == 'm' || c == 'n') {
            cout << c;
        }
    }
    cout << endl;

    return(0);
}