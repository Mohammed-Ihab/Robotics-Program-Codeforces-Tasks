#include <iostream>
using namespace std;

int main(){

    int A {}, B {}, C {}, max{}, min{}, mid {};

    cin >> A >> B >> C;

    if(A >= B){
        if(A >= C){
            max = A;
            if(B >= C){
                mid = B;
                min = C;
            } else{
                mid = C;
                min = B;
            }
        } else{
            max = C;
            mid = A;
            min = B;
        }
    } else{
        if(B >= C){
            max = B;
            if(A >= C){
                mid = A;
                min = C;
            } else{
                mid = C;
                min = A;
            }
        } else{
            max = C;
            mid = B;
            min = A;
        }
    }

    cout << min << endl << mid << endl << max << endl;
    cout << endl;
    cout << A << endl << B << endl << C << endl;

    return 0;
}