#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class wsa{
    private:
        string station_name;
        int temperature[7];
        int id;
    public:
        wsa(string station_name, int temperature[7], int id) {
            this->station_name = station_name; 
            this->temperature[7] = temperature[7];
            this->id = id;
        }
        wsa() {};
    void sredt() {
        cout << "Введите название станции: " << endl;
        cin >> station_name;
        srand(time(NULL));
        for(int i = 0; i < 7; i++) {
            temperature[i] = rand() % 50;
        }
        int max = -1;
        int min = 51;
        int middle = 0;
        for(int i = 0; i < 7; i++) {
             middle += temperature[i];
            if(temperature[i] > max) {
                max = temperature[i];
            }
            if(temperature[i] < min) {
                min = temperature[i];
            }
        }
        id = rand() % 10;
        int m = middle / 7;
        cout << "Станция: " << station_name << endl;
        cout << "ID: " << id << endl;
        cout << "Средняя температура: " << m << endl;
        cout << "Минимальная и максимальная температура: " << min << " " << max << endl;
    }
};

int main() {
    string s;
    int t[7];
    int id;
    vector<wsa> w(4);
    for(int i = 0; i < 4; i++) {
        w[i].sredt();
    }
    return 0;
}