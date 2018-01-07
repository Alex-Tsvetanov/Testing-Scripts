#include<iostream>
using namespace std;
long long n, p, rez[100000000];
int main(){
    cin>>n>>p;
    long long P[p];
    long long stepen[p];
    for(long long i=;i<p;i++){
        P[i]=0;
        stepen[i]=i;
    }
    for(long long i=;i<p;i++){
        cout<<P[i];
        cout<<stepen[i];
    }
    cout<<endl;
    return 0;
}

