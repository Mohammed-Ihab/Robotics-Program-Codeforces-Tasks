#include <iostream>
#include <vector>

using namespace std;

int main(){

    int N {}, S {}, K {};
    cin >> N >> S;

    vector<int> numbers {};

    for(int i = 1; i <= N; i++){
        cin >> K;
        numbers.push_back(K);
    }

    for(int i = 0; i < static_cast<int>(N / S); i++){
        int min {numbers[i * S]};
        for(int j = 1; j < S; j++){
            if(numbers[i * S + j] <= min){
                min = numbers[i * S + j];
            }
        }
        cout << min << " ";
    }

    if (N % S != 0){
        int min {numbers[(N - (N % S))]};
        for(int i = 1; i < N % S; i++){
            if(numbers[(N - (N % S)) + (i)] <= min){
                min = numbers[(N - (N % S)) + (i)];
            }
        }

        cout << min;
    }

    cout << endl;
    return 0;
}