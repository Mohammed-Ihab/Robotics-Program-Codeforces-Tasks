#include <iostream>

#include <string>

using namespace std;

int main(){

    string first1, first2, second1, second2;
    cin >> first1 >> second1 >> first2 >> second2;

    if(second1 == second2){
        cout << "ARE Brothers" << endl;
    } else{
        cout << "NOT" << endl;
    }

    return 0;
}