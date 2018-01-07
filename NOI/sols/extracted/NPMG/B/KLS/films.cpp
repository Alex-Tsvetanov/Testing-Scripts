#include <algorithm>
#include <cmath>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;






int main() {
int T,n,m,L,a,vreme=0;
int k;
cout<<"n=";
cin>>n;
while(n<1){
if (n<1){cin>>n;
}}
cout<<"m=";
cin>>m;
while(m>1000000){
if (m>1000000){cin>>m;
}}
cout<<"T=";
cin>>T;
while(T>1000000){
if (T>1000000){cin>>T;
}}
cout<<"L=";
cin>>L;
while(L>1000000){
if (L>1000000){cin>>L;
}}
int masiv[n]={0};
int masiv2[n]={0};

for(int z=0;z<n;z++){
    cin>>a;
        while(a>n){
if (a>n){cin>>a;
}}
masiv[z-1]=a;

}
masiv2[0]=2;
vreme+=T+L;
for(int p=0;p<n;p++){
for(int d=1;d<n;d++){
if(masiv[p]==masiv[d] and masiv[p]!=masiv2[p-1]){vreme+=T+L;}

}
masiv2[p]=masiv[p];
}
cout<<vreme/3<<endl;
/*for(int z=0;z<n;z++){
    if(masiv[z]==masiv[z+1] ){vreme+=T+L;}
    if(masiv[z]!=masiv[z+1]){vreme=vreme;}

}
cout<<vreme<<endl;
*/return (0);

}

