#include<iostream>
using namespace std;
int main (){
    int n,t,f,x,will;
    cin>>n>>t>>f>>x;
    t--;
    n-=f;
    will=x;
    x*=n;
    t*=60;
    if(x<t){
        cout<<"YES!"<<endl;
        cout<<t-x;}
    else{
        if(t==x){
        cout<<"EXACT!";}
        else{
            if(x>t){
                cout<<"NO!"<<endl;
                cout<<x-t<<endl;
                n=0;
                while(will<t){
                    n++;
                    will+=will;}
                cout<<n;}
        }
    }
    return 0;}
