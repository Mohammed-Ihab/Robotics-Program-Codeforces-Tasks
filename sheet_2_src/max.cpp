#include <iostream>

using namespace std;

int main(){

    int counter {}, x {};
    cin >> counter >> x;
    int result = x;

    for(int i = 1; i < counter; i++){
        cin >> x;
        if(x > result)
            result = x;
    }

    cout << result << endl;

    return 0;
}