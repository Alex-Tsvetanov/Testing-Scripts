#include<iostream>

using namespace std;

int main () {
    long long starting, poKolkoNaDen, minusEveryDay, maximal;
    long long days, endDay;

    cin >> starting >> poKolkoNaDen >> minusEveryDay >> maximal >> days;

    endDay = starting * poKolkoNaDen - minusEveryDay;
    starting = endDay;


    for(long long i = 1 ; i < days ; i ++){
        if(starting <= 0){
            starting = 0;
            break;
        }

        if(starting > maximal){
            starting = maximal;
        }
        endDay = starting * poKolkoNaDen - minusEveryDay;
        starting = endDay;

        if(starting > maximal){
            starting = maximal;
        }
    }

    cout << starting << "\n";

    return 0;
}
