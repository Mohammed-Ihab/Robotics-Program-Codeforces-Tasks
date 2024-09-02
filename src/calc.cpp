#include <iostream>
using namespace std;

int main(){

    long long A {}, B {}, result {};
    char S {};

    cin >> A >> S >> B;

    if(S == '+')
        result = A + B;
    else if(S == '-')
        result = A - B;
    else if(S == '*')
        result = A * B;
    else
        result = A / B;

    cout << result << endl;    

    return 0;
}