#include<iostream>
using namespace std;
int main(){
    int n,t,f,x,w,h;
    cin>>n>>t>>f>>x;
    t=t*60;
    t=t-60;
    n=n-f;
    w=x*n;
    if(w<t){
        cout<<"YES\n"<<t-w<<endl;
    }
    else if(w>t){
        cout<<"NO\n"<<w-t<<endl;
        h=(w-t)/x;
        if((w-t)%x!=0){h++;}
        cout<<h<<endl;
    }
    else if(w==t){
        cout<<"EXACT!"<<endl;
    }
return 0;
}
