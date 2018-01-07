#include<iostream>
using namespace std;
int main(){
long long n;
cin>>n;
if((n-(n/3)*3)%2==1){
    cout<<2<<" "<<n/3-1;
}else{
    cout<<1<<" "<<n/3;
}
cout<<"\n";
return 0;
}
