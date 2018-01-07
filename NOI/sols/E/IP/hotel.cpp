#include <iostream>
using namespace std;
int main (){
long long n;
cout<<"vavedi mi 1 cislo megdu 2 i 100";
cin>>n;
if(n%3<=0){
    cout<<n/3<<" ";
}else
if(n%3==1){
    cout<<(n-1)/3<<" "<<1;
}else
if(n%3==2){
    cout<<(n-2)/3<<" "<<1;
}

return 0;
}
