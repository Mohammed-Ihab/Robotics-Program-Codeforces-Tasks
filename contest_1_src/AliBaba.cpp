#include <iostream>
#include <string>

using namespace std;

int main(){

    long long a {}, b {}, c {}, d {};
    cin >> a >> b >> c >> d;

    string result {};

    if(a * b + c == d)
        result = "YES";
    else if(a * b - c == d)
        result = "YES";
    else if(a + b * c == d)
        result = "YES";
    else if(a + b - c == d)
        result = "YES";
    else if(a - b * c == d)
        result = "YES";
    else if(a - b + c == d)
        result = "YES";
    else
        result = "NO";

    cout << result << endl;

    return 0;
}