#include<iostream>
using namespace std;
long long n, vhod[20], j,i, ng;

int main (){
cin>>n;
for(i=0; i<n; i++){
    cin>>vhod[i];
}
for(i=0; i<n; i++){
    if(vhod[i]>ng){
        ng=vhod[i];
    }
}
for(i=0; i<n; i++){
    if(vhod[i]==ng){
        if(i!=0 and i!=n-1){
            if(vhod[i-1]<vhod[i+1]){
                for(j=i; j<n; j++){
                    cout<<vhod[j];
                }
                for(j=0; j<i; j++){
                    cout<<vhod[j];
                }
            }else{
                for(j=i; j>=0; j--){
                    cout<<vhod[j];
                }
                for(j=n-1; j>i; j--){
                    cout<<vhod[j];
                }
            }
        }else{
            if(i==0){
                if(vhod[n-1]>vhod[i+1]){
                    cout<<vhod[0];
                    for(j=n-1; j>0; j--){
                        cout<<vhod[j];
                    }

                }else{
                    for(j=0; j<n; j++){
                        cout<<vhod[j];
                    }
                }
            }
            if(i==n-1){
                if(vhod[n-2]>vhod[0]){
                    for(j=n-1; j>=0; j--){
                        cout<<vhod[j];
                    }
                }else{
                    cout<<vhod[n-1];
                    for(j=0; j<n-1; j++){
                        cout<<vhod[j];
                    }

                }
            }
    }
 break;
    }

}
return 0;
}
