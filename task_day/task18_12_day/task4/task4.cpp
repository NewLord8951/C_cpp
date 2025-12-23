#include <iostream>
using namespace std;

class point {
    private:
        int x;
        int y;
    public:
        point(int x, int y) {
            this->x = x;
            this->y = y;
        }
    void issameas(point b) {
        if(this->x == b.x && this->y == b.y) {
            cout << true << endl;
        }
    }
};

int main() {
    int a1 = 0;
    int b1 = 0;
    int a2 = 0;
    int b2 = 0;
    point a(a1, b1);
    point b(a2, b2);
    a.issameas(b);
    return(0);
}
