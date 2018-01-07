#include <iostream>
#include <cmath>

using namespace std;

long long n, p;

long long logrtm (long long a,long long  b) {
    long long i =0;
    for (i = 0; a > pow(b , i); ++i) {

    }
    return i;
}

long long otDesetichnaVPichna(long long a,long long b) {
    long long pichno = 0;
    long long kopie = a;
    for (long long i = 0; i-1 < logrtm(kopie, b); ++i) {
        pichno += (a % b)*pow(10, i);
        a /= b;
        //cout << i << " "<<a << " " << b << " " << pichno << "\n";
    }
    return pichno;

}

long long cifri (long long a) {
    long long i;
    for (i = 0; a!=0; ++i) {
        a /= 10;
    }
    return i;
}

long long otPichnaVDesetichna(long long a, long long b) {
    long long buf=0;
    long long c = cifri(kopie);
    for (long long i = 0; i < c; ++i) {
        buf += (a%10)*
    }
}

//void chisla

int main() {
    /*cin >> n >> p;
    //cout << logrtm(n, p);
    //otDesetichnaVPichna(n, p);
    long long broiCifri = cifri(otDesetichnaVPichna(n, p));
    void chisla ();
    //cout < < broiCifri;*/
    cout << 1 << "\n";
    return 0;
}
