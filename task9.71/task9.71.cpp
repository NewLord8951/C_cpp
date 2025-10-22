#include <iostream>
#include <string>
using namespace std;

int main() {
    string words;
    cout << "Введите предложение на английском: " << endl;
    getline(cin, words);

    int n = 0;
    int m = 0;

    for(char c : words) {
        if(c == 'n') {
            n++;
        }
        if(c == 'm') {
            m++;
        }
    }

    if(n > m) {
        cout << "n больше чем m" << endl;
    }
    else if(n < m) {
        cout << "m больше чем n" << endl;
    }
    else {
        cout << "Их одинаковое количество или их вообще нету в предложении" << endl;
    }

    return(0);
}