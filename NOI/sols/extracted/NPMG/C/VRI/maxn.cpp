#include<iostream>
#include<algorithm>
using namespace std;
long long n, N[100000000];
int main(){
    cin>>n;
    for(long long i=0;i<n;i++){
        cin>>N[i];
    }
    sort(N, N+n, greater<long long>());
    for(long long i=0;i<n;i++){
        cout<<N[i];
    }
    cout<<endl;
    return 0;
}

