#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int *arr;
    int ans[5];
    for(int i=0;i<5;i++){
        ans[i] = 1;
        arr = new int[n];
        cin>>arr[0]>>arr[1];
        if(arr[1]+1<arr[0]){
            ans[i]=0;
        }
        for(int j=2;j<n;j++){
            cin>>arr[j];
            if(arr[j]<arr[j-1]){
                int max_val = arr[j-1]-1;
                for(int k=0;k<(j-1);k++){
                    if(ans[i]==0)break;
                    if(arr[k]==max_val)max_val--;
                }
                if(arr[j]!=max_val)ans[i]=0;
            }
        }
    }
    for(int i=0;i<5;i++)cout<<ans[i];
    return 0;
}
