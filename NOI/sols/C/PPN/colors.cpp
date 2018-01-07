#include<iostream>
#include<cstring>
#include<cmath>
#include<ctime>
#include<vector>
#include<algorithm>
using namespace std;

    long long segCvqt[100001];
    long long brbaloni=0;
    long long minmax=99999999;

int main() {

    long long n,norma;
    cin >> n >> norma;

    for(int i=0;i<n;i++){
        cin >> segCvqt[i];
        chislo = segCvqt[i];
        for(int j=0;j<i;j++){
            if(segCvqt[j]==cvetove[j]){
                brbaloni++;
            }
        }
    }

    cout << "ne znam kakvo da pravq\n";

    return 0;
}
