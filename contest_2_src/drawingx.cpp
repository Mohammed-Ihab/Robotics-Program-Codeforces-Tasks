#include <iostream>

using namespace std;

void asterisks(int x){
    for(int j = 1; j <= x; j++){
        cout << "*";
    }
}

int main(){

    int line_num {};
    cin >> line_num;

    int factor {static_cast<int>(line_num / 2)};

    for(int i = 1; i <= factor; i++){
        asterisks(i - 1);
        cout << "\\";
        asterisks(line_num - (i * 2));
        cout << "/";
        asterisks(i - 1);
        cout << endl;
    }
    asterisks(factor);
    cout << "X";
    asterisks(factor);
    cout << endl;
    for(int i = factor; i >= 1; i--){
        asterisks(i - 1);
        cout << "/";
        asterisks(line_num - (i * 2));
        cout << "\\";
        asterisks(i - 1);
        cout << endl;
    }

    return 0;
}