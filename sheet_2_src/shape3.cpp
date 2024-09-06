#include <iostream>

using namespace std;

int main(){

    int line_num {};
    cin >> line_num;

    int stars_num {1 + 2 * line_num};

    for(int i = 1; i <= line_num ; i++){
        for(int j = 1; j <= static_cast<int>(stars_num / 2) - (i); j++){
            cout << " ";
        }
        for(int k = 1; k <= 1 + 2 * (i - 1); k++){
            cout << "*";
        }
        cout << endl;
    }
    
    for(int i = line_num; i >= 1; i--){
        for(int j = static_cast<int>(stars_num / 2) - i; j >= 1; j--){
            cout << " ";
        }
        for(int k = 1 + 2 * (i - 1); k >= 1; k--){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}