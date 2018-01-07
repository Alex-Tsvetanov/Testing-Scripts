#include<iostream>
#include<algorithm>
using namespace std;
long long n, k, N[100000], K[100000000], b, broicvetove[1000000], srtbroicbetove[1000000];
int main(){
    cin>>n>>k;
    for(long long i=0;i<n;i++){
        cin>>N[i];
        N[i]=broicvetove[i];
    }
    sort(broicvetove, broicvetove+n);
    unique_copy(broicvetove, broicvetove+n, srtbroicbetove);
    b=sizeof(srtbroicbetove);
    if(n==k){
        sort(N, N+n);
        for(long long i=0;i<n;i++){
        cout<<N[i];
        }
    }
    if(n>k){
        if(b==k){
        for(long long i=0;i<b;i++){
        cout<<srtbroicbetove[i];
        }
        }
        if(k>b){
        sort(broicvetove, broicvetove+n);
        for(long long i=0;i<n;i++){
        cout<<srtbroicbetove[i];
        }
        }
    }
    cout<<endl;
    return 0;
}
