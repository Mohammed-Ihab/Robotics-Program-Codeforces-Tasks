#include <iostream>
using namespace std;

int main(){

    const int num1 {0}, num2 {25}, num3 {50}, num4 {75}, num5{100};
    float x {};
    cin >> x;

    if(x >= num1 && x <= num2)
        cout << "Interval [" << num1 << "," << num2 << "]" << endl;
    else if(x > num2 && x <= num3)
        cout << "Interval (" << num2 << "," << num3 << "]" << endl;
    else if(x > num3 && x <= num4)
        cout << "Interval (" << num3 << "," << num4 << "]" << endl;
    else if(x > num4 && x <= num5)
        cout << "Interval (" << num4 << "," << num5 << "]" << endl;
    else
        cout << "Out of Intervals" << endl;

    return 0;
}