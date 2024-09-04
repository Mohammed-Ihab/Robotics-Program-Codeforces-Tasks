#include <iostream>

using namespace std;

int main(){

    long long a {}, b {}, k {};
    cin >> a >> b >> k;

    double memo = a % k;
    double momo = b % k;

    if(memo == 0 && momo == 0)
        cout << "Both" << endl;
    else if(memo == 0 && momo != 0)
        cout << "Memo" << endl;
    else if(memo != 0 && momo == 0)
        cout << "Momo" << endl;
    else
        cout << "No One" << endl;

    return 0;
}