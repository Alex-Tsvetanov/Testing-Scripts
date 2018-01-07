#include<iostream>
using namespace std;
int main(){
    long long brzad,wreme,brreshzad,minzareshzad,wrzad;
    cin>>brzad>>wreme>>brreshzad>>minzareshzad;
    brzad-=brreshzad;
    wrzad=brzad;
    wreme--;
    wrzad*=minzareshzad;
    wreme*=60;
    if(wrzad>wreme){
        cout<<"NO"<<endl<<wrzad-wreme<<endl<<wrzad/60;
    }
    if(wrzad==wreme){
        cout<<"EXACT";
    }
    if(wrzad<wreme){
        cout<<"YES"<<endl<<wreme-wrzad;

    }
        return 0;
}
