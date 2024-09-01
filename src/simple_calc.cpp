#include <iostream>

using namespace std;

int main(){
    long long x {}, y {}, sum {}, product {}, sub {};
    cin >> x >> y;
    
    sum = x + y;
    product = x*y;
    sub = x - y;

    cout << x << " + " << y << " = " << sum << endl;
    cout << x << " * " << y << " = " << product << endl;
    cout << x << " - " << y << " = " << sub << endl;

    return 0;
}