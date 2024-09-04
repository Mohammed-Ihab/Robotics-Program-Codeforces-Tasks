#include <iostream>
using namespace std;

int main(){

    int A {}, B {}, C {}, max{}, min{};

    cin >> A >> B >> C;

    if(A >= B){

        if(A >= C){
            max = A;
            if(B >= C){
                min = C;
            } else{
                min = B;
            }
        } else{
            max = C;
            min = B;
        }
 
    } else{

        if(B >= C){
            max = B;
            if(A >= C){
                min = C;
            } else{
                min = A;
            }
        } else{
            max = C;
            min = A;
        }

    }

    cout << min << " " << max << endl;

    return 0;
}