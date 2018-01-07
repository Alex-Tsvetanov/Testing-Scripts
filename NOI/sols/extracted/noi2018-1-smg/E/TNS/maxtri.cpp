#include <iostream>
using namespace std;
int main () {
long long a, b, c, ng, nm, sredno=0;
cin>>a;
ng=a;
nm=a;
sredno=a;
cin>>b;
if(ng<b){
    ng=b;
}
if(nm>b){
    nm=b;
}
cin>>c;
if(ng<c){
    ng=c;
}
if(nm>c){
    nm=c;
}
if((a>=0) and (a<=9) and (b>=0) and (b<=9) and (c>=0) and (c<=9))
if((ng==a) and (nm==b)){
    sredno=c;
}
if((ng==a) and (nm==c)){
    sredno=b;
}
if((ng==b) and (nm==a)){
    sredno=c;
}
if((ng==b) and (nm==c)){
    sredno=a;
}
if((ng==c) and (nm==b)){
    sredno=a;
}
if((ng==c) and (nm==a)){
    sredno=b;
}
if((a!=0) or(b!=0) or (c!=0)){
cout<<ng<<sredno<<nm;
}



return 0;
}
