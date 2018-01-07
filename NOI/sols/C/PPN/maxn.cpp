#include<iostream>
#include<cstring>
#include<cmath>
#include<ctime>
#include<vector>
#include<algorithm>
using namespace std;

    long long vruh[32];
    long long maxsum=0;
    long long segsum=0;
    long long obrvruh[32];

int main() {

    long long n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> vruh[i];
        vruh[i+n]=vruh[i];
    }



    for(int i=0;i<n;i++){
        segsum=0;
        for(int j=i ; j<i+n ; j++){
            if(vruh[i]==0){
                break;
            }
            segsum=segsum*10+vruh[j];
        }
        if(segsum>maxsum){
            maxsum=segsum;
        }
    }

    ///obrushtame

    for(int i=0,j=n*2-1;i<n*2;i++,j--){
        obrvruh[i]=vruh[j];
    }

    for(int i=0;i<n;i++){
        segsum=0;
        for(int j=i ; j<i+n ; j++){
            if(obrvruh[i]==0){
                break;
            }
            segsum=segsum*10+obrvruh[j];
        }
        if(segsum>maxsum){
            maxsum=segsum;
        }
    }

    cout << maxsum;

    return 0;
}
