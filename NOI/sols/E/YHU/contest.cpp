#include<iostream>
using namespace std;
int main(){
long long zadachi,chasove,resheni1chas,vremezaOst;
cin>>zadachi>>chasove>>resheni1chas>>vremezaOst;
chasove=chasove-1;
zadachi=zadachi-resheni1chas;
if(chasove*60>zadachi*vremezaOst){
    cout<<"YES"<<"\n"<<chasove*60-zadachi*vremezaOst;
}
if(chasove*60<zadachi*vremezaOst){
    cout<<"NO"<<"\n"<<zadachi*vremezaOst-chasove*60<<"\n"<<zadachi-(chasove*60/vremezaOst);

}
if(chasove*60==zadachi*vremezaOst){
    cout<<"EXACT!";

}


return 0;
}
