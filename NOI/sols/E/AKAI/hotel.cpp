#include<iostream>
using namespace std;
int main (){
    int n,podve,potri;
    cin>>n;
    if(n%3==1){
        potri=n/3;
        if(potri!=0){potri--;podve=2;}
        else{potri=0;podve=1;}
    }
    if(n%3==2){
        potri=n/3;
        podve=1;}
    if(n%3==0){
        potri=n/3;
        podve=0;}
    cout<<podve<<" "<<potri;
    return 0;
}
