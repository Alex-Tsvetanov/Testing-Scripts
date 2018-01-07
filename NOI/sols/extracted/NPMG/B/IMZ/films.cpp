#include <iostream>
using namespace std;
long long AmountStudents, AmountMaxFilmTransfers, AmountTimeFilmDownload, AmountTimeFilmLength, StudentsFilms[1000001];
int main(){
    cin >> AmountStudents >> AmountMaxFilmTransfers >> AmountTimeFilmDownload >> AmountTimeFilmLength;
    for(long long Counter = 1; Counter <= AmountStudents; Counter++){
        cin >> StudentsFilms[Counter];
    }
    AmountStudents++;
    cout << AmountStudents << "\n";
    return 0;
}
