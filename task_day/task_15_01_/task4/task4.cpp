#include <iostream>
#include <string>
using namespace std;

int countvowels(string& str) {
    int a = 0;
    for(char i : str) {
        if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' || i == 'y') {
        a++;
        } 
    }
    cout << "Гласных: " << a << endl;
    return(a);
}

void removespace(string& str) {
    string result;
    for (char c : str) {
        if (c != ' ') {
            result += c;
        }
    }
    str = result;
    cout << str << endl;
}

bool ispalindrome(string& str) {
    string r(str.rbegin(), str.rend());
    if(str == r) {
        cout << "Является палиндромом" << endl;
        return(true);
    }
    else {
        cout << "Не является палиндромом" << endl;
        return(false);
    }
}

int main() {
    string str;
    cout << "Введите предложение: " << endl;
    getline(cin, str);
    countvowels(str);
    removespace(str);
    ispalindrome(str);
    return 0;
}
