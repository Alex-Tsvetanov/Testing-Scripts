#include <iostream>

using namespace std;

int main(){
    long long N,K;
    cin>>N>>K;
    long long a[N],b[K],c[K],l[K],R[K];
    for(long long i=0;i<N;i++){
        cin>>a[i];
    }
    for(long long i=0;i<K;i++){
        cin>>b[i];
    }
    for(long long i=0;i<K;i++){
        l[i]=0;
    }
    for(long long i=0;i<K;i++){
        R[i]=0;
    }

    for(long long i=0;i<K;i++){
        for(long long j=0;j<N;j++){
            c[i]=b[i];
            if(j==i){continue;}
            if(a[j]==a[b[i]]){
               if(j<b[i]){
                  l[i]++;
               }else{
                  R[i]++;
               }
            }
        }
    }
    for(long long i=0;i<K;i++){
        cout << b[i] <<" "<< l[i] <<" "<< R[i] << endl;
    }
    return 0;
}
