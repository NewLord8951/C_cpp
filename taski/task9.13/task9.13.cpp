#include <iostream>
#include <string>
using namespace std;

int main() {
    string slovo;
    cout << "Ввдеите слово: " << endl;
    cin >> slovo;

    char slovo_3 = slovo[2];
    cout << "Третий символ: " << slovo_3 << endl;

    return(0);
}
