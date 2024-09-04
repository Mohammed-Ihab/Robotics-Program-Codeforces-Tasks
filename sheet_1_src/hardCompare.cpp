#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    // Using log function instead of pow to avoid potential overflow problems

    double logA = log(A);
    double logC = log(C);

    double value1 = B * logA;
    double value2 = D * logC;

    if (value1 > value2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
