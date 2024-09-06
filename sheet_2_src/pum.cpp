#include <iostream>

using namespace std;

int main(){

    int N {}, i {1}, k {}; 
    cin >> N;

    for(int j = 1; j <= N; j++){
        k = i + 2;
        for(int l = i; l <= k; l++){
            cout << l << " ";
        }
        cout << "PUM" << endl;
        i += 4;
    }

    return 0;
}