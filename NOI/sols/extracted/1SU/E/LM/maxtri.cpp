#include<iostream>
using namespace std;
int main() {
long long chislo1,chislo2,chislo3,naiGolqmo;
cin>>chislo1>>chislo2>>chislo3;
for (chislo1<10;chislo1>chislo2;chislo1>chislo3) {
    cout<<chislo1;
    if (chislo2>chislo3){
        cout<<chislo2<<chislo3;
    }
     if (chislo3>chislo2){
        cout<<chislo3<<chislo2;

    }
    if (chislo2=chislo3) {
        cout<<chislo2<<chislo3;
    }
}
for (chislo2<10;chislo2>chislo1;chislo2>chislo3) {
    cout<<chislo2;
    if (chislo1>chislo3){
        cout<<chislo1<<chislo3;
    }
     if (chislo3>chislo1){
        cout<<chislo3<<chislo1;

    }
     if (chislo2=chislo3){
        cout<<chislo1<<chislo3;
    }

}
for (chislo3<10;chislo3>chislo2;chislo3>chislo1) {
    cout<<chislo3;
    if (chislo2>chislo1){
        cout<<chislo2<<chislo1;
    }
     if (chislo1>chislo2){
        cout<<chislo1<<chislo2;

    }
     if (chislo2=chislo1){
        cout<<chislo2<<chislo1;
    }

}



return 0;
}
