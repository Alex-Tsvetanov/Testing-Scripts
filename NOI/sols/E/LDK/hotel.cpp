#include <iostream>
using namespace std;
int main(){
long long n,dv,tr;
bool pr = false ;
cin >> n;
if ( n <2 && n > 100){
    cout << "enter is wrong";
}
else {
if (n%3==0){
    cout << "0"<< " " << n/3;
    pr=true;
}
if(n%2==0 && (n % 3)% 2 != 0){
    cout << n/2 <<  " " << "0";
    pr = true ;
}
if( (n % 3)% 2 == 0 && n %2 != 0 && n % 9 != 0){
        tr = n/3;
    cout << (n-tr *3)/2<< " " << tr ;
    pr=true;
}
if (pr == false){
    if ((n-(n/3))%2!=0){
        tr = n/3-1;
        dv = (n - tr * 3)/2;
        cout << dv <<" " <<  tr;
    }
}
}


return 0;
}
