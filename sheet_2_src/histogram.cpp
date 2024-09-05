#include <iostream>

using namespace std;

int main(){

    int X {}, N {};
    
    char S {};
    cin >> S >> N;

    for(int i = 1; i <= N; i++){
        cin >> X;
        for(int j = 1; j <= X; j++){
            cout << S;
        }
        cout << endl;
    }

    return 0;
}