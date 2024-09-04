#include <iostream>

using namespace std;

int main(){

    int A {}, first_digit {}, last_digit {};
    cin >> A;

    last_digit = A % 10;
    first_digit = (A - last_digit) / 10;

    if(last_digit == 0){
        cout << "YES" << endl;
    } else{

        double first_div_float = static_cast<double>(first_digit) / last_digit;
        double last_div_float = static_cast<double>(last_digit) / first_digit;
        
        int first_div_int = first_div_float;
        int last_div_int = last_div_float;

        double first_checker = first_div_float - first_div_int;
        double last_checker = last_div_float - last_div_int;

        if(first_checker == 0 || last_checker == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}