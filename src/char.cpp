#include <iostream>

using namespace std;

int Letter_to_ASCII(char x){
    return static_cast<int>(x);
}

char ASCII_to_Letter(int y){
    return static_cast<char>(y);
}

int main(){

    char c {};
    cin >> c;

    int ASC = Letter_to_ASCII(c);

    if(ASC >= 65 && ASC <= 90)
        ASC += 32;
    else
        ASC -= 32;

    c = ASCII_to_Letter(ASC);
    cout << c << endl;

    return 0;
}