#include <iostream>
#include <string>
using namespace std;

string compress_rle(string input) {
    int c = 1;
    string a = input;
    string d;
    for (int i = 1; i < input.length(); i++) {
        if (input[i] == input[i - 1]) {
            c++;
        } 
        else {
            d += input[i - 1];
            d += to_string(c);
            c = 1;
        }
        
    }
    d += input.back();
    d += to_string(c);
    return d;
}

int main() {
    string input;
    cout << "Введите строку: " << endl;
    cin >> input;
    string a = compress_rle(input);
    cout << a << endl;
    cout << input << endl;
    return 0;
}