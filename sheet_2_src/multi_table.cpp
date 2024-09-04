#include <iostream>

using namespace std;

int main(){

    const int counter {12};
    int n {};
    cin >> n;

    for(int i = 1; i <= counter; i++){
        int product = n * i;
        cout << n << " * " << i << " = " << product << endl;
    }

    return 0;
}