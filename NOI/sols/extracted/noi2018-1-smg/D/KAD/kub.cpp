#include<iostream>
using namespace std;
int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    long long x=a*b,y=a*c,z=b*c,v=a*b*c,s=2*(x+y+z);
    if(a>2 and b>2 and c>2){
            cout<<(x-(a*2+(b-2)*2))*(c-2)<<" ";
    }else{
            cout<<0<<" ";
    }
    cout<<(x-(a*2+(b-2)*2))*2+(z-(c*2+(b-2)*2))*2<<" "<<2*(2*(a-2)+2*(b-2)+2*(c-2))<<" "<<8<<" ";
    if((a==1 and b==0 and  c==0) or (a==0 and b==1 and c==0) or (a==0 and b==0 and c==1)){
            cout<<4<<" ";
    }else{
            cout<<0<<" ";
    }
    if((a==1 and b==1) or (c==1 and b==1) or (a==1 and c==1)){
            cout<<2<<" ";
    }else{
            cout<<0<<" ";
    }
    if(a==1 and b==1 and c==1){
            cout<<1<<endl;
    }else{
            cout<<0<<endl;
    }
return 0;
}
