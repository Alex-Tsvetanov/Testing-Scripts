#include <iostream>
using namespace std;
int main () {

long long c=0, b, d, e;
long long a[3];
cin>>a[0]>>a[1]>>a[2];


if(a[0]!=a[1] and a[1]!=a[2] and a[2]!=a[0] ) {
    for(e=0 ; e<3 ; e++) {

        for(b=0 ; b<3 ; b++) {


            if(a[b]>c){
            c=a[b];


            }
        }
        cout<<c;

        for(d=0 ; d<3 ; d++) {

            if(a[d]==c) {

            a[d]=0;
            }

        }
        c=0;
    }

}else{
 if(a[0]==a[1] and a[0]==a[2] and a[1]==a[2]) {

 cout<<a[0]<<a[1]<<a[2];

 }else{


 if(a[0]==a[1]) {

    if(a[1]>a[2]){

        cout<<a[1]<<a[0]<<a[2];

    }else{

    cout<<a[2]<<a[1]<<a[0];

    }

 }

 if(a[1]==a[2]) {

    if(a[1]>a[0]){

        cout<<a[1]<<a[2]<<a[0];

    }else{

        cout<<a[0]<<a[1]<<a[2];

    }



 }


 if(a[0]==a[2]) {

    if(a[2]>a[1]){

        cout<<a[2]<<a[0]<<a[1];

    }else{

        cout<<a[1]<<a[2]<<a[0];

    }
}

 }

}

return 0;
}
