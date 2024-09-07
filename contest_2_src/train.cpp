#include <iostream>

using namespace std;

int main(){

    const int seats_per_row {4};

    long long seat_id {};
    cin >> seat_id;

    long long rows {}, coloums {};

    rows = seat_id / seats_per_row;
    if(rows % 2 == 0)
        coloums = seat_id % seats_per_row;
    else
        coloums = 3 - seat_id % seats_per_row;

    cout << rows << " " << coloums << endl;

    return 0;
}