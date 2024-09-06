#include <iostream>

using namespace std;

int main(){

    int M {}, N {}, min {}, max {}, sum {};

    bool status {true};

    while(status){
        sum = 0;
        cin >> M >> N;
        if(M >= 1 && N >= 1){
            if (M <= N){
                min = M;
                max = N;
            }else{
                min = N;
                max = M;
            }   

            for(int i = min; i <= max; i++){
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum << endl;
        }else{
            status = false;
        }
    }
    
    return 0;
}
