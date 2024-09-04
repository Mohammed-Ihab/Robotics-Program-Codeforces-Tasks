#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(9);

    const float pii {3.141592653};
    float radius {}, area {};

    cin >> radius;
    area = radius * radius * pii;
    cout << area << endl;

    return 0;
}