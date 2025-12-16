#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class shape {
    protected:
        string color;
    public:
        shape() {};
        shape(string color) {
            this -> color = color;
        }
    void printcolor() {
        cout << color << endl;
    }
};

class circle : public shape {
    protected: 
        int radius;
    public:
        circle(int radius) {
            this -> radius = radius;
        }
    void area() {
        int pi = M_PI;
        cout << radius * radius * pi << endl;
    }
};

class rectangle : public shape {
    protected:
        int width;
        int height;
    public:
        rectangle(int width, int height) {
            this -> width = width;
            this -> height = height;
        }
    void area() {
        cout << height * width << endl;
    }
};

int main() {
    shape a("a");
    circle b(11);
    rectangle c(12, 13);
    a.printcolor();
    b.area();
    c.area();
}
