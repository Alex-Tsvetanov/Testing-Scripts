#include<iostream>
using namespace std;
 int main(){
    long long a,b,c,chislo;
    cin>>a>>b>>c;
    cout<<max(a,max(b,c));
    chislo=max(a,max(b,c));
    if(chislo==a){
        a=0;
    }
    if(chislo==b){
        b=0;
    }
    if(chislo==c){
        c=0;
    }
    cout<<max(a,max(b,c));
    chislo=max(a,max(b,c));
    if(chislo==a){
        a=0;
    }
    if(chislo==b){
        b=0;
    }
    if(chislo==c){
        c=0;
    }
    cout<<max(a,max(b,c));
    return 0;

}

