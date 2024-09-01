#include <iostream>

using namespace std;

int main(){

    long long num1{}, num2{}, num3{}, num4{}, sub{};

    cin >> num1 >> num2 >> num3 >> num4;
    sub = (num1 * num2) - (num3 * num4);
    cout << "Difference = " << sub << endl;

    return 0;
}