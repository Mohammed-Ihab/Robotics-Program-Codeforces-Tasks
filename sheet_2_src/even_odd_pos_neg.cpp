#include <iostream>

using namespace std;

int main(){

    int counter {}, n {}, even {}, odd {}, pos {}, neg {};
    cin >> counter;

    for(int i = 1; i <= counter; i++){
        cin >> n;

        if(n == 0 || n % 2 == 0)
            even++;
        else
            odd++;
        
        if(n > 0)
            pos++;
        else if(n < 0)
            neg++;

    }

    cout << "Even: " << even << endl << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl << "Negative: " << neg << endl;

    return 0;
}