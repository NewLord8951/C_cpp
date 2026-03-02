#include <iostream>
#include <cmath>
using namespace std;

class point{
    friend void distance(point b) {
        double a = pow((b.x * b.x) + (b.y * b.y), 0.5);
        cout << a << endl;
    }
    private:
        int x;
        int y;
    public:
        point(int x, int y) {}
        point() {};
    
    void vvod() {
        cout << "Введите x" << endl;
        cin >> x;
        cout << "Введите y" << endl;
        cin >> y; 
    }
    void vyvod() {
        cout << x << " " << y << endl;
    } 
};

int main() {
    point q;
    q.vvod();
    q.vyvod();
    distance(q);
    return 0;
}