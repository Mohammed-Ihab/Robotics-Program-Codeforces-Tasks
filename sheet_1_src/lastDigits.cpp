#include <iostream>
#include <cmath>

using namespace std;

int main(){

    unsigned long long A {}, B {}, C {}, D {}, sum {}, last_two_digits {1};
    float product {};
    cin >> A >> B >> C >> D;
    sum = A + B + C + D;

    last_two_digits = (last_two_digits * A) % 100;
    last_two_digits = (last_two_digits * B) % 100;
    last_two_digits = (last_two_digits * C) % 100;
    last_two_digits = (last_two_digits * D) % 100;

    if(last_two_digits < 10)
        cout << "0" << last_two_digits << endl;
    else
        cout << last_two_digits << endl;

    return 0;
}