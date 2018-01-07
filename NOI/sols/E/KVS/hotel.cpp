#include<iostream>
using namespace std;
int main(){
    int otbor,tr,dv,h;
    cin>>otbor;
    h=otbor/3;
    if(otbor%3!=0){h++;}
    h=h*3;
    dv=h-otbor;
    h=h/3;
    tr=h-dv;
    cout<<dv<<" "<<tr<<endl;
return 0;
}
