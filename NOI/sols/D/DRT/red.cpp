#include <iostream>

using namespace std;

int main()
{
    long long n,k,i,j;
    long long redicaN[100000],redicaK[100000];
    long long broi[100];
    cin>>n>>k;
    for(i=1;i==n;i++){
        cin>>redicaN[i];
    }
    for(j=1;j==k;j++){
        cin>>redicaK[j];
    }
    for(j=1;j==k;j++){
        for(i=1;i==n;i++){
            if(redicaN[redicaK[j]]==redicaN[i]){
                broi[j]+=1;
            }
        }
    }
    for(j=1;j==k;j++){
        cout<<broi[j]<<endl;
    }
    return 0;
}
