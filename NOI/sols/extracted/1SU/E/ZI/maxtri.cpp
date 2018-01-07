#include<iostream>
using namespace std;
int main () {
long long a,b,c,naiGolyamo,sreda,posledno;
cin>>a>>b>>c;
if (a>=b && a>=c) {
    naiGolyamo=a;
    }
if (b>=a && b>=c) {
    naiGolyamo=b;
}
if (c>=a && c>=b) {
    naiGolyamo=c;
}
if (naiGolyamo==a && b>=c) {
    sreda=b;
    posledno=c;
}else{
if (naiGolyamo==a &&c>=b) {
    sreda=c;
    posledno=b;
}
}
if (naiGolyamo==b && a>=c) {
    sreda=a;
    posledno=c;
}else {
if (naiGolyamo==b && c>=a) {
    sreda=c;
    posledno=a;
}
}
if (naiGolyamo==c && a>=b){
    sreda=a;
    posledno=b;
}else {
if (naiGolyamo==c && b>=a) {
    sreda=b;
    posledno=a;
}
}
cout<<naiGolyamo<<sreda<<posledno;
return 0;
}
