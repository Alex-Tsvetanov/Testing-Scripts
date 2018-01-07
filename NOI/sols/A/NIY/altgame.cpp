#include <iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int m;
    cin>>m;
    bool ans[m];
    for(int i=0;i<m;i++){
        unsigned long long amount;
        cin>>amount;
        bool arr[amount];
        for(unsigned long long j=0;j<amount;j++){
            j++;
            if(j<a && j<b)arr[j-1] = 0;
            else if(j==a || j==b)arr[j-1] = 1;
            else if(j>=a && arr[j-1-a]==0)arr[j-1]=1;
            else if(j>=b && arr[j-1-b]==0)arr[j-1]=1;
            else arr[j-1]=0;
            j--;
            //cout<<arr[j]<<" ";
        }
        //cout<<endl;
        if(arr[amount-1]==1)ans[i]=1;
        else ans[i] = 0;
    }
    for(int i=0;i<m;i++){
        if(ans[i])cout<<ans[i]<<endl;
        else cout<<ans[i] + 2<<endl;
    }
    return 0;
}
