#include<iostream>
using namespace std;
int main(){
long long x=0,y=0;
long long n,k,neshto=0;
cin>>n>>k;
long long a[n],b[k];
for(int c=0;c<n;c++){
cin>>a[c];
}
for(int u=0;u<k;u++){
cin>>b[u];
}
for(int u=0;u<k;u++){
neshto=b[u];
x=0;
y=0;
for(int d=0;d<neshto-1;d++){

       if(a[d]==a[neshto-1]){
        x=x+1;
       }
}
    for(int h=neshto;h<n;h++){
         if(a[h]==a[neshto-1]){
         y=y+1;
         }
    }
cout<<x<<" "<<y<<endl;
}
return 0;
}
