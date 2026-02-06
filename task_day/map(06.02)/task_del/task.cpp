#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> a;
    a["4"] = 4;
    a["1"] = 1;
    a["2"] = 2;
    a.find("3");
    cout << a["3"] << endl;
    return 0;
}