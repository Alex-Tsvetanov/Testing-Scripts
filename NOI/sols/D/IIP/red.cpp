#include<iostream>
using namespace std;
long long N,K;
long long a[100000],b[10000];
long long chislaVlqvo=0;
long long chislaVdqsno=0;
int main(){
    cin>>N>>K;
    for(int i=0;i<N;++i){
        cin>>a[i];
    }
    for(int j=0;j<K;++j){
        cin>>b[j];
    }
    for(int j=0;j<K;++j){
        chislaVlqvo=0;
        chislaVdqsno=0;
        for(long long i=0;i<N;++i){
            if(i+1<b[j] && a[i]==a[b[j]-1]){
                chislaVlqvo++;
            }
            if(i+1>b[j] && a[i]==a[b[j]-1]){
                chislaVdqsno++;
            }
        }
        cout<<chislaVlqvo<<" "<<chislaVdqsno<<endl;
    }
    return 0;
}
