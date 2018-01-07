#include<iostream>
#include<cmath>

int n, p;
int perm[30], cn;

using namespace std;
int main(){
cin >> n >> p;

while(true) {
    perm[0]++;
    for(int i = 0; i < 30; i++) {
        if (perm[i] == 2) {
            perm[i + 1]++;
            perm[i] = 0;
        }
    }
    cn = 0;
    for(int i = 0; i < 30; i++) {
        cn += perm[i] * pow(p, i);
    }
    if (cn > n) break;
    cout << cn << "\n";
}

return 0;
}
