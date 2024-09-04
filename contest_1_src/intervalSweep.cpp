#include <iostream>
#include <string>

using namespace std;

int main(){

    int a {}, b {};
    cin >> a >> b;

    string result {};

    if(a == 0 || b == 0)
        result = "NO";
    else if(a == b)
        result = "YES";
    else if(a - b == 1 || b - a == 1)
        result = "YES";
    else
        result = "NO";

    cout << result << endl;
    
    return 0;
}