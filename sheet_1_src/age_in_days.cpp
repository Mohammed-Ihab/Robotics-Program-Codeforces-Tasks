#include <iostream>
using namespace std;

int main(){

    const int days_per_year {365}, days_per_month {30};
    int days {}, age_years {}, age_months {};

    cin >> days;

    age_years = days / days_per_year;
    days -= age_years * days_per_year;

    age_months = days / days_per_month;
    days -= age_months * days_per_month;

    cout << age_years << " years\n" << age_months << " months\n" << days << " days" << endl;

    return 0;
}