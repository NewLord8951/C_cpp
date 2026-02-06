#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, string> phoneBook;
    phoneBook["Ivan"] = "Ivan", "123-4567";
    phoneBook["Anna"] = "Anna", "765-4321";
    phoneBook["Peter"] = "Peter", "555-1234";
    cout << phoneBook["Anna"] << endl;
    if(phoneBook.find("Maria") != phoneBook.end()) {
        cout << phoneBook["Maria"] << endl;
    }
    else {
        cout << "Ы" << endl;
    }
    phoneBook.erase("Peter");
    cout << "Всего контактов: " << phoneBook.size() << endl;
    return 0;
}
