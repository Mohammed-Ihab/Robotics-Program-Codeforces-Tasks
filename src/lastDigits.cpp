#include <iostream>
#include <cmath>

using namespace std;

/*float get_last_two(float x){
    return fmod(x, 100.0);
}*/

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


    /*if (sum > 100000){
        product = A / 100000000 * B * C * D;
        last_two_digits = get_last_two(product);
        product = last_two_digits * 100000000;
        cout << product << endl;
        last_two_digits = get_last_two(product);
        if(last_two_digits == 0)
            cout << "00" << endl;
        else
            cout << last_two_digits << endl;

    }else {
        product = A * B * C * D;
        if(product >= 100){
            last_two_digits = get_last_two(product);
            if(last_two_digits == 0)
                cout << "00" << endl;
            else
                cout << last_two_digits << endl;
        } else {
            cout << product << endl;
        }    

    }*/

    return 0;
}