#include <iostream>

using namespace std;

int main(){

    int N {}, A {}, B {}, min {}, max {}, odd_total {};
    cin >> N;

    for(int i = 1; i <= N; i++){
        odd_total = 0;
        cin >> A >> B;
        if(A <= B){
            min = A;
            max = B;
        } else{
            min = B;
            max = A;
        }
        for(int j = min + 1; j < max; j++){
            if(j % 2 != 0)
                odd_total += j;
        }
        cout << odd_total << endl;
    }

    return 0;
}