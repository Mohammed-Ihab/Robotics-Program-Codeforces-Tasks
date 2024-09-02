#include <iostream>
using namespace std;

int main(){

    double x {};
    
    cin >> x;

    int y {static_cast<int>(x)};
    double checker {x - static_cast<double>(y)};

    if(checker == 0.0)
        cout << "int " << y << endl;
    else
        cout << "float " << y << " " << checker << endl;
    
    return 0;
}