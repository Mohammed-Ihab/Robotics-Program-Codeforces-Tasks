#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){

    int A {}, B {}, dividor_checker {}, i {}, pick_up {}, remain {};
    cin >> A;
    
    vector<int> numbers {};

    bool status {true};

    if(A >= 10){
        while(status){
            dividor_checker = A / (10 * pow(10, i));
            if(dividor_checker < 1)
                status = false;
            
            if(i > 0)
                remain = A % static_cast<int>(10 * pow(10, i - 1));

            pick_up = (A % static_cast<int>(10 * pow(10, i)) - remain) / pow(10, i);
            numbers.push_back(pick_up);
            i++;
        }

        for(int j = 0; j < i; j++){
            B += numbers[j] * pow(10, i - 1 - j);
        }

        cout << B << endl;

        if(A == B)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    } else{
        cout << "YES" << endl;
    }

    return 0;
}