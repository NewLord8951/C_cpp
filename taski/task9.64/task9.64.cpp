#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string words;
    cout << "Ввдеите предложение на английском: " << endl;
    getline(cin, words);

    int a;
    for(size_t i = 0; i < words.length() - 1; i++) {
        if(words[i] && words[i + 1]) {
            ++a;
        }
    }
    cout << "Количество одинаковых соседних символов: " << a << endl;

    return(0);
}
