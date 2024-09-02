#include <iostream>
#include <string>

using namespace std;

int main(){

    float A {}, B {};
    char S {};
    string status {};

    cin >> A >> S >> B;

    if(S == '>'){
        if(A > B)
            status = "Right";
        else
            status = "Wrong";
    }else if(S == '<'){
        if(A < B)
            status = "Right";
        else
            status = "Wrong";
    }else { 
        if(A == B)
            status = "Right";
        else
            status = "Wrong";
    }

    cout << status << endl;

    return 0;
}