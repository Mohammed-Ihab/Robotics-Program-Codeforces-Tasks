#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){

    int N {}, A {};
    cin >> N;

    vector<int> binary {};

    for(int i = 1; i <= N; i++){
        int j {}, new_A {};
        bool status {true};

        cin >> A;

        while(status){
            if(A % 2 != 0){
                binary.push_back(1);
                j++;
            }
            A /= 2;
            if(A == 0)
                status = false;

        }
        for(int k = 0; k <= j - 1; k++){
            new_A += pow(2, k);
        }
        cout << new_A << endl;
    }

    return 0;
}