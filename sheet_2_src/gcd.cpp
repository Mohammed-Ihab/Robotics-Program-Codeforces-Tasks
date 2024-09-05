#include <iostream>

using namespace std;

int main(){

    int A {}, B {}, C {}, result {};
    cin >> A >> B;

    if(A <= B)
        C = A;
    else
        C = B;

    for(int i = 1; i <= C; i++){
        if(A % i == 0 && B % i == 0)
            result = i;
    }

    cout << result << endl;

    return 0;
}