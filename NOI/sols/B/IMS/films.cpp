#include<iostream>
#include<algorithm>
using namespace std;

long long br[1000005];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long uchenici,m,T,L,vreme;
    cin>>uchenici>>m>>T>>L;
    for(long long i=0;i<uchenici;i++){
        long long a;
        cin>>a;
        br[--a]++;
    }
    sort(br,br+uchenici);

    long long otg=0,chakane=1;
    for(long long i=uchenici-1;i>=0 and br[i]!=0;i-=m){
        long long curr=chakane*T+L+(br[i]-1)*(T+L);
        if(curr>otg){
            otg=curr;
        }
        chakane++;
    }
    cout<<otg<<"\n";
    return 0;
}
