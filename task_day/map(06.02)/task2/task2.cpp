#include <iostream>
#include <map>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    map<string, vector<int>> studentGrades;

    studentGrades["Ivan"].push_back(5);
    studentGrades["Ivan"].push_back(4);
    studentGrades["Ivan"].push_back(3);

    studentGrades["Anna"].push_back(4);
    studentGrades["Anna"].push_back(5);
    studentGrades["Anna"].push_back(5);

    studentGrades["Peter"].push_back(3);
    studentGrades["Peter"].push_back(4);
    studentGrades["Peter"].push_back(2);

    double a = 0;
    for(double elem : studentGrades["Ivan"]) {
        a += elem;
        cout << elem << endl;
    }
    cout << a / 3 << endl;
    cout << " " << endl;

    double b = 0;
    for(double elem : studentGrades["Anna"]) {
        b += elem;
        cout << elem << endl;
    }
    cout << b / 3 << endl;
    cout << " " << endl;

    double c = 0;
    for(double elem : studentGrades["Peter"]) {
        c += elem;
        cout << elem << endl;
    }
    cout << c / 3 << endl;
    return 0;
}