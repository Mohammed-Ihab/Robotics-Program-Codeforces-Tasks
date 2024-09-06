#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){

    int N {};
    cin >> N;

    vector<int> fib {0, 1};

    for(int i = 0; i < N; i++){
        if(i > 1){
            fib.push_back(fib[i - 1] + fib[i - 2]);
            cout << fib[i] << " ";
        } else{
            cout << fib[i] << " ";
        }
    }

    cout << endl;
    return 0;
}