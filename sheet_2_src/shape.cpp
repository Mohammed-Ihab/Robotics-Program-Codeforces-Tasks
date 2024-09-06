#include <iostream>

using namespace std;

int main(){

    int A {};
    cin >> A;

    for(int i = A; i >= 1; i--){
        for(int j = i; j >= 1; j--){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}