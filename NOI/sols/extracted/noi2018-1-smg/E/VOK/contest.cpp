#include<iostream>
using namespace std;
int main(){
long long brzad,trzad,vreme,leszad,mintrzad;
cin>>brzad>>vreme>>leszad>>mintrzad;
trzad=brzad-leszad;
if(vreme*60-60>trzad*mintrzad){
    cout<<"YES"<<endl<<(vreme*60-60)-(mintrzad*trzad);
}
if(vreme*60-60==trzad*mintrzad){
    cout<<"EXACT!";
}
if(vreme*60-60<trzad*mintrzad){
    cout<<"NO"<<endl<<(mintrzad*trzad)-(vreme*60-60)<<endl<<trzad-((vreme*60-60)/mintrzad);
}


return 0;
}
