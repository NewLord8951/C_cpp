#include <iostream>
using namespace std;

int main() {
    string word;
    cout << "Ввдеите слово: " << endl;
    cin >> word;

    char final_word = word.back();
    cout << final_word << endl;

    return(0);
}