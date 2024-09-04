#include <iostream>

using namespace std;

int main(){

    int x {};
    bool status {true};
    cin >> x;

    int i = x - 1;

    while(i > 1 && true){
        if(x % i == 0){
            status = false;
        }
        i--;
    }

    if(status)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}