#include<iostream>
using namespace std;
int main(){
    long long a,b,l=0,d=0,turs;
    cin>>a>>b;
    long long cha[a],chb[b];
    for(int t=0;t<a;t++){
        cin>>cha[t];
    }
    for(int t=0;t<b;t++){
        cin>>chb[t];
    }
    for(int f=0;f<b;f++){
        turs=chb[f]-1;
       turs=cha[turs];

       for(int p=chb[f]-2;p>=0;p--){
        if(cha[p]==turs){
            l++;
        }
       }
       for(int p=chb[f];p<a;p++){
        if(cha[p]==turs){
            d++;
        }
       }
       cout<<l<<" "<<d<<endl;
       l=0;
       d=0;
    }
    return 0;
}
