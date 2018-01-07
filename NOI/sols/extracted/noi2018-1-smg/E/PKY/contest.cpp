#include<iostream>
using namespace std;
long broi_zad, vreme, lezni_zad, vreme_za_trudni_zad;
int main() {

    cin >> broi_zad >> vreme >> lezni_zad >> vreme_za_trudni_zad;
    broi_zad = broi_zad - lezni_zad;
    if (lezni_zad > 0) {
        vreme--;
    }
    vreme = vreme * 60;
    if (broi_zad * vreme_za_trudni_zad < vreme) {
        cout << "YES";
        cout << "\n" << vreme - broi_zad * vreme_za_trudni_zad;
    } else if (broi_zad * vreme_za_trudni_zad > vreme){
        cout << "NO\n";
        cout << broi_zad * vreme_za_trudni_zad - vreme;
        cout << "\n" << broi_zad - vreme / vreme_za_trudni_zad;
    } else {
        cout << "EXACT!";
    }

    return 0;
}
