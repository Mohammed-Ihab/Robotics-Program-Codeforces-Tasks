#include <iostream>

using namespace std;

int main(){

    double A {}, B {}, C {}, TrueValue {};
    char S {}, Q {};

    cin >> A >> S >> B >> Q >> C;

    if(S == '+'){
        TrueValue = A + B;
        if(C == TrueValue)
            cout << "Yes" << endl;
        else
            cout << TrueValue << endl;
    } else if(S == '-'){
        TrueValue = A - B;
        if(C == TrueValue)
            cout << "Yes" << endl;
        else
            cout << TrueValue << endl;
    } else if(S == '*'){
        TrueValue = A * B;
        if(C == TrueValue)
            cout << "Yes" << endl;
        else
            cout << TrueValue << endl;
    }
    
    return 0;
}