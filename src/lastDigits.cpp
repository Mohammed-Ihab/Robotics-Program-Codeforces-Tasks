#include <iostream>

using namespace std;

int main(){

    unsigned long long A {}, B {}, C {}, D {}, product {};
    cin >> A >> B >> C >> D;
    product = A * B * C * D;

    if(product >= 100){
        unsigned long long last_two_digits {product % 100};
        cout << last_two_digits << endl;
    } else {
        cout << product << endl;
    } 

    return 0;
}