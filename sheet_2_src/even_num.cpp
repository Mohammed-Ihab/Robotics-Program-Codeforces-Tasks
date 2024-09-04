#include <iostream>

using namespace std;

int main(){

    int x {};
    cin >> x;

    if(x == 1){
        cout << "-1" << endl;
    } else{
        for(int i {2}; i <= x; i++){
            if(i % 2 == 0)
                cout << i << endl;

        }
    }

    return 0;
}