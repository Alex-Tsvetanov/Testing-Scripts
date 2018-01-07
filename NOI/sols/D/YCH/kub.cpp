#include <iostream>
using namespace std;
int main(){
    long long a,b,c,br0,br1,br2,br3;
    cin>>a>>b>>c;
    long long ab=a*b,ac=a*c,bc=b*c,brk=a*b*c;
    if(brk==1){
        cout<<"0 0 0 0 0 0 1";
        return 0;
    }
    if(ab==1 or ac==1 or bc==1){
        cout<<"0 0 0 0 "<<brk-2<<" 2 0";
        return 0;
    }
    if(ab==2 or ac==2 or bc==2){
        cout<<"0 0 0 "<<brk-4<<" 4 0 0";
        return 0;
    }
    br0=(a-2)*(b-2)*(c-2);
    br1=((a-2)*(b-2))+((a-2)*(c-2))+((b-2)*(c-2))*2;
    br2=((a+b+c)-6)*4;
    if(a==1 or b==1 or c==1){
        br3=4;
    }else{
        br3=8;
    }
    cout<<br0<<" ";
    cout<<br1<<" ";
    cout<<br2<<" ";
    cout<<br3<<" 0 0 0";
return 0;
}
