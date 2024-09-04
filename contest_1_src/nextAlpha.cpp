#include <iostream>

using namespace std;

int main(){

    char a {};
    cin >> a;

    int x = static_cast<int>(a);

    if(x == 122)
        x = 97;
    else
        x++;

    a = static_cast<char>(x);
    cout << a << endl;

    return 0;
}