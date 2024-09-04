#include <iostream>

using namespace std;

int main(){

    const int fixed_pass {1999};
    int password {};
    
    

    while(password != fixed_pass){
        cin >> password;
        
        if(password != fixed_pass)
            cout << "Wrong" << endl;
        else
            cout << "Correct" << endl;
    }

    return 0;
}