#include <iostream>
#include <string>
using namespace std;

int main() {
    string words;
    cout << "Ввдеите предложение: " << endl;
    getline(cin, words);

    for(char c : words) {
        if(c == 'i' || c == 'I') {
            cout << c << "";
        }
    }
    return(0);

}
