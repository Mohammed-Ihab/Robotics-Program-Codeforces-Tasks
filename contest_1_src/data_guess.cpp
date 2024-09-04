#include <iostream>

using namespace std;

int main(){

    double A {}, B {}, C {}, result_float {}, float_checker {};
    cin >> A >> B >> C;

    result_float = A * B / C;
    long long result_int = result_float;

    float_checker = result_float - result_int;

    if(float_checker == 0.0){
        if(result_int > 2147483647){
            cout << "long long" << endl;
        } else{
            cout << "int" << endl;
        }
    } else{
        cout << "double" << endl;
    }

    return 0;
}