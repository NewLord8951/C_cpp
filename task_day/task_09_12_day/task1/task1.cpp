#include <iostream>
using namespace std;

class Rectangle {
    private:
        double width;
        double height;
    public:
        Rectangle(double w, double h) {
            width = w;
            height = h;
        }
    double calculateArea() {
        return(width * height);
    }
    double calculatePerimeter() {
        return(width * 2 + height * 2);
    }
    bool isSquare() {
        if(width == height) {
            return(true);
        }
        else {
            return(false);
        }
    }
};

int main() {
    double wi; 
    cout << "Введите ширину: " << endl;
    cin >> wi;
    double he;
    cout << "Введите длину: " << endl;
    cin >> he;
    Rectangle a(wi, he);
    cout << a.calculateArea() << endl;
    cout << a.calculatePerimeter() << endl;
    cout << a.isSquare() << endl;
}