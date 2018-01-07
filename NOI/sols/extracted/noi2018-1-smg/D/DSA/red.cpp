#include<iostream>
using namespace std;
int main(){
long long N,K,poziciq[100000],i,j,wlqwo=0,wdqsno=0,chislo[100000];
cin>>N>>K;
for(i=0;i<N;++i){
    cin>>chislo[i];
}
for(i=0;i<K;++i){
    cin>>poziciq[i];
}
for(i=N;i>=0;--i){
    for(j=poziciq[i];j>=0;--j){
        if(chislo[i]==chislo[j]){
            wlqwo++;
        }
}
cout<<wlqwo<<" ";
wlqwo=0;
}
for(i=0;i<N;++i){
    for(j=poziciq[i];j<N;++j){
        if(chislo[i]==chislo[j]){
            wdqsno++;
        }
    }
cout<<wdqsno<<endl;
wdqsno=0;
}
cout<<endl;
    return 0;
}
