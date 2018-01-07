#include<iostream>
using namespace std;
int main (){
long long a[3],naigolamo,akocaravni=0;
for(int b=0;b<3;b++){
cin>>a[b];
if(b==0){
naigolamo=a[b];
}
if(a[b]>naigolamo){
naigolamo=a[b];
}
}
if(a[0]==naigolamo){
akocaravni=1;
cout<<a[0];
if(a[1]>=a[2]){
cout<<a[1]<<a[2];
}
else{
cout<<a[2]<<a[1];
}
}
if(a[1]==naigolamo && akocaravni==0){
akocaravni=1;
cout<<a[1];
if(a[2]>=a[0]){
cout<<a[2]<<a[0];
}
else{
cout<<a[0]<<a[2];
}
}
if(a[2]==naigolamo && akocaravni==0){
akocaravni=1;
cout<<a[2];
if(a[1]>=a[0]){
cout<<a[1]<< a[0];
}
else{
cout<<a[0]<<a[1];
}
}




return 0;
}
