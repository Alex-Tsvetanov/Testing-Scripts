#include<iostream>
using namespace std;
int main(){
long long a,b,br=0,br2=0;
cin>>a>>b;
long long c[a],d[b];
for(int i=0;i<a;i++){
    cin>>c[i];
}
for(int i=0;i<b;i++){
    cin>>d[i];
}
for(int i=0;i<b;i++){
    for(int j=d[i]-1;j>=0;j--){
        if(c[j]==c[d[i]-1]){
            br++;
        }
    }
    for(int j=d[i]-1;j<a;j++){
        if(c[j]==c[d[i]-1]){
            br2++;
        }
    }
    cout<<br-1<<" "<<br2-1<<"\n";
    br=0;
    br2=0;
}
return 0;
}


