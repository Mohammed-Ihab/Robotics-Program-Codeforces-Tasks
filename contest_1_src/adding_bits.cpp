#include <iostream>
#include <bitset>

using namespace std;

int main(){

    long a {}, b {};
    cin >> a >> b;

    int result = 0;
    int bitPosition = 1;

    while (a > 0 || b > 0) {
        int bitA = a & 1;
        int bitB = b & 1;
        
        int bitResult = bitA ^ bitB;
        
        result |= (bitResult * bitPosition);
        
        a >>= 1;
        b >>= 1;
        
        bitPosition <<= 1;
    }

    cout << result << endl;

    return 0;
}