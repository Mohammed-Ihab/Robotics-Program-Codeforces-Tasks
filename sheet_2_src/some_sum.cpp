#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){

    int N {}, A {}, B {}, result {}, min {}, max {}, dividor_checker {};
    cin >> N >> A >> B;

    vector<int> numbers {};

    if(A <= B){
        min = A;
        max = B;
    } else{
        min = B;
        max = A;
    }

    for(int i = 1; i <= N; i++){
        int j {}, remain {}, vec_sum {}, pick_up {};
        bool status {true};

        numbers.clear();

        if(i < 10){
            if(i >= min && i <= max)
                result += i;
        } else{
            while(status){
                dividor_checker = i / (10 * pow(10, j));
                if(dividor_checker < 1)
                    status = false;

                if(j > 0)
                    remain = i % static_cast<int>(10 * pow(10, j - 1));

                pick_up = (i % static_cast<int>(10 * pow(10, j)) - remain) / pow(10, j);
                numbers.push_back(pick_up);
                j++;
            }
            for(int k = 0; k < j; k++){
                vec_sum += numbers[k];
            }
            if(vec_sum >= min && vec_sum <= max)
                result += i;
        }
    }

    cout << result << endl;

    return 0;
}