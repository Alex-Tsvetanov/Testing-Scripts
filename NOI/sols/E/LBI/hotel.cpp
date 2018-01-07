#include<iostream>
using namespace std ;
int main() {
    long long otbor,dali=0,kolko=0;
    cin>>otbor;
    while(dali==0) {
        if(otbor%3==0) {
            cout<<kolko<<" "<<otbor/3<<endl;
            dali=1;
        } else {
            kolko++;
            otbor=otbor-2;
        }
        if(otbor==0) {
            cout<<kolko<<"  "<<"0"<<endl;
            dali=1;
        }
        }
    return 0;

}
