#include <iostream>
using namespace std;
int main(){
int vhniz, lice;
int n, izrez;
char operation;
cout<<"Number of cuts: ";cin>>n;
do{
cout<<"Vhoden niz(0;12000]= ";cin>>vhniz;
if(vhniz>12000||vhniz<=0) cout<<"Nevalidna stoinost za vhoden niz!"<<endl;
}
while(vhniz>12000||vhniz<=0);
for(int i=0; i<n;i++){
cout<<"Enter operation(+, -): ";cin>>operation;
cout<<"Enter izrez: ";cin>>izrez;
switch(operation){
    case '+': lice=vhniz+izrez; vhniz=lice;
    break;
    case '-':lice=vhniz-izrez; vhniz=lice;
    break;
    default: "No such operation!";
}
}
cout<<"Lice= "<<lice<<endl;
return 0;
}
