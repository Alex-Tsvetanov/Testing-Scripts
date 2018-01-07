#include<iostream>
using namespace std;
int main(){
    long long n,m,mm,t,l,i,br=0;
    cin>>n>>m>>t>>l;
    int a[n];
    bool b[n+1],C=true;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    if(m == 1){
        cout<<n*(t+l);
        return 0;
    }
    for(i=0;i<n;i++){
        C=false;
        for(int j=0;j<n;j++){
            b[j]=true;
        }
        mm = m;
        for(int k=i;k<n;k++){
            if(b[a[k]] && a[k]!=0){
                b[a[k]] = false;
                a[k] = 0;
                mm--;
            }
            if(mm<=0){
                break;
            }
        }
        for(int j=0;j<n;j++){
            if(!b[j]){
                br++;
                break;
            }
        }

    }
    if(n%2==1 && m%2==0 && n%m==1){
        br++;
    }
    cout<<(t+l)*br;
}
