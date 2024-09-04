#include <iostream>

using namespace std;

int main(){

    char c {};

    cin >> c;
    int ASCII = static_cast<int>(c);

    if(ASCII >= 48 && ASCII <= 57){
        cout << "IS DIGIT" << endl;
    } else{
        cout << "ALPHA" << endl;
        if(ASCII >= 65 && ASCII <= 90)
            cout << "IS CAPITAL" << endl;
        else
            cout << "IS SMALL" << endl;
    }

    return 0;
}