#include <iostream>
using namespace std;
int main () {
long long a,b,c,d,k,x;
cin >> a >> b >> c >> d >> k;
long long bact=a;
for (x=0;x<k;x++) {
        bact=bact*b;
    if (bact>c) {
        if (bact==b*d and bact-c>=d) {
                bact=d;
            break;
        }
        else if (bact-c>=d) {
                bact=d;
        }

        else {
            bact=bact;
        }
    }
    else {
            bact=0;
            break;
    }
}
cout << bact <<endl;
return 0;
}

