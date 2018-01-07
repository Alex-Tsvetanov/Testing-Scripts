#include <iostream>
using namespace std;
int main(){
long long v[3], nm=0, s=0, ng=0, broq4ka;
for(broq4ka=0;broq4ka<3;broq4ka=broq4ka+1){
    cin>>v[broq4ka];
    if(v[broq4ka]>ng){
        nm=s;
        s=ng;
        ng=v[broq4ka];
    }else if(v[broq4ka]>s){
        nm=s;
        s=v[broq4ka];
    }else{
        nm=v[broq4ka];
    }
}
cout<<ng*100+10*s+nm;
return 0;
}
