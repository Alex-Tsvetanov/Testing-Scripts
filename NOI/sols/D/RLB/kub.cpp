#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    int a[3];
    cin >> a[0] >> a[1] >> a[2];

    if(a[0] == 1 and a[1] == 1 and a[2] == 1){
        cout<<0<<" "<<0<<" "<<0<<" "<<0<<" "<<0<<" "<<0<<" "<<1<<endl;
        return 0;
    }




    sort(a, a + 3);
    if(a[0] == 1 and a[1] == 1){
        cout<<0<<" "<<0<<" "<<0<<" "<<0<<" "<<a[2]-2<<" "<<2<<" "<<
        0<<endl;
        return 0;
    }

    if(a[0] == 1){
       cout<<0<<" "<<0<<" "<<(a[2]-2)*(a[1] - 2)<<" "<<(a[1]-2)*2
       +(a[2] - 2)*2<<" "<<4<<" "<<0<<" "<<0<<endl;
       return 0;
    }


    if(a[0] > 1){
        if(a[0] == 2){
            cout<<0<<" "<<(a[2] - 2)*(a[1] - 2)*2<<" "<<(a[2]-2)*4+
            (a[1]-2)*4<<" "<<8<<
            " "<<0<<" "<<0<<" "<<0<<endl;
            return 0;
        }
        cout<<(a[2]-2)*(a[1]-2)*(a[0]-2)<<" "<<(a[2] - 2)*
        (a[1] - 2)*6<<" "<<(a[2]-2)*a[0]*2+(a[1]-2)*2*a[0]<<" "<<8<<
            " "<<0<<" "<<0<<" "<<0<<endl;
            return 0;
    }


    return 0;
}
