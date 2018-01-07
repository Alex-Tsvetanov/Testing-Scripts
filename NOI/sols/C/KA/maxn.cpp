#include<iostream>
using namespace std;
int main() {
    long long n,chisla[20],index,bigestNumber=0,l,r;
    bool right;
    cin>>n;
    for(int a=0; a<n; a++) {
        cin>>chisla[a];
        if(chisla[a]>bigestNumber) {
            bigestNumber=chisla[a];
            index=a;
        }
    }
    cout<<bigestNumber;
    if(index==0) {
        l=n-1;
    } else {
        l=index-1;
    }
    if(index==n-1) {
        r=0;
    } else {
        r=index+1;
    }
    if(chisla[l]>chisla[r]) {
        right=false;
    } else {
        right=true;
    }
    if(right) {
        for(int a=r; a!=index;) {
            cout<<chisla[a];
            if(a==n-1) {
                a=0;
            } else {
                a++;
            }
        }
    } else {
        for(int a=l; a!=index;) {
            cout<<chisla[a];
            if(a==0) {
                a=n-1;
            } else {
                a--;
            }
        }
    }
    return 0;
}
