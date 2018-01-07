#include<iostream>
using namespace std;
int main () {
long n,a,b;
cin>>n;
b=n/3;
a=n%3;
if(a%2==0){
cout<<a/2<<" "<<b;
}
else{
b=b-1;
a=a+3;
cout<<a/2<<" "<<b;
}

return 0;
}
