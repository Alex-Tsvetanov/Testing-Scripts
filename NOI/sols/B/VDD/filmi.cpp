#include<iostream>
using namespace std;
int main(){
    int n, m, t, l;
    cin>>n>>m>>t>>l;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int br=n;


    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]) {br--; break;}
        }
    }
}
