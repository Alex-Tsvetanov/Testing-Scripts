#include<iostream>
using namespace std;
int main(){
long long a, b, c;
cin>>a>>b>>c;
while(a<b||b<c||a<c){
if(a<b){
    swap(a,b);
}
if(b<c){
    swap(b,c);
}
if(a<c){
    swap(a,c);
}
}
cout<<endl<<a<<b<<c;
cout<<endl;
return 0;
}
