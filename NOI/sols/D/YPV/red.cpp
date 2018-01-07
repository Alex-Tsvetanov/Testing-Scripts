#include<iostream>
using namespace std;
int podred[100000],br[100000];
int main(){
    int N,K;
    cin>>N>>K;
    int elements[100000],zapitvane[10000];
    for(int i=0;i<N;i++){
        cin>>elements[i];
        podred[i]=br[elements[i]]+1;
        br[elements[i]]++;
    }
    for(int i=0;i<K;i++){
        cin>>zapitvane[i];
    }
    for(int i=0;i<K;i++){
        cout<<podred[zapitvane[i]-1]-1<<" "<<br[elements[zapitvane[i]-1]]-podred[zapitvane[i]-1]<<endl;
    }
return 0;
}
