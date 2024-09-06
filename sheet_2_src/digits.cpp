#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){

    int N {};
    cin >> N;

    int x {}, k {}, dividor_checker {}, pick_up {}, remain {};

    vector<int> A {};
    vector<int> numbers {};

    bool status {true};

    for(int i = 1; i <= N; i++){
        cin >> x;
        A.push_back(x);
    }

    for(int j = 0; j < N; j++){
        status = true;
        k = 0;
        remain = 0;
        numbers.clear();
        if(A[j] >= 10){
            while(status){
                dividor_checker = A[j] / (10 * pow(10, k));
                if(dividor_checker < 1)
                    status = false;

                if(k > 0)
                    remain = A[j] % static_cast<int>(10 * pow(10, k - 1));

                pick_up = (A[j] % static_cast<int>(10 * pow(10, k)) - remain) / pow(10, k);
                numbers.push_back(pick_up);
                k++;
            }
            for(int p = 0; p < k; p++){
                cout << numbers[p] << " ";
            }
        }else{
            cout << A[j];
        }

        cout << endl;
    }

    return 0;
}