#include<iostream>
using namespace std;
int main (){
    long long n, p, i, br=0,seg,br2=0;
    cin>>n>>p;
    for(i=1; i<n+1; i++){
        seg=i;
        while(seg>0){
            br2++;
            if(seg%p==0 or seg%p==1){
                br++;
            }
            seg=seg/p;
        }
        if(br==br2){
            cout<<i<<endl;
        }
        br=0;
        br2=0;
    }
    return 0;
}
