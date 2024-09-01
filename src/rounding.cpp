#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double A {}, B {};
    
    cin >> A >> B;
    
    double rounding = round(A/B);
    double rounding_up = ceil(A/B);
    double rounding_down = floor(A/B);

    cout << "floor " << A << " / " << B << " = " << rounding_down << endl;
    cout << "ceil " << A << " / " << B << " = " << rounding_up << endl;
    cout << "round " << A << " / " << B << " = " << rounding << endl;

    return 0;
}