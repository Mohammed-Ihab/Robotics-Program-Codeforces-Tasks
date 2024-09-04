#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double X {}, P {}, old_price {};
    cin >> X >> P;

    old_price = P / (1 - X / 100);

    cout << fixed << setprecision(2);
    cout << old_price << endl;

    return 0;
}