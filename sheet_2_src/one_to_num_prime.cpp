#include <iostream>

using namespace std;

int main(){

    int N {}, j;
    cin >> N;

    bool prime;
    cout << "2 ";

    for(int i = 3; i <= N; i++){
        j = 2;
        prime = true;
        while(j < i && prime){
            if(i % j == 0)
                prime = false;
            j++;
        }
        if(prime)
            cout << i << " ";
    }

    cout << endl;
    return 0;
}