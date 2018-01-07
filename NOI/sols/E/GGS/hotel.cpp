#include <iostream>
using namespace std;
int main (){

int n,minStai3=0,minStai2=0,ostavashtiStai;
cin >> n;

ostavashtiStai=n%3;

if (ostavashtiStai%2==0){
        minStai3=n/3;
        minStai2=ostavashtiStai/2;
        cout << minStai2 << " " << minStai3;
}else{
while(ostavashtiStai!=0){
    minStai2++;
    n=n-2;
    ostavashtiStai=n%3;
}
minStai3=n/3;
cout << minStai2 << " " << minStai3;
}


return 0;
}
