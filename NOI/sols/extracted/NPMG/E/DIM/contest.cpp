#include<iostream>
using namespace std;
int main(){
long long n;
long long f;
long long t;
long long x;
long long zad;
long long minuti;
cin>>n>>t>>f>>x;
if((5<=n && n<=100) && (1<=f && f<n)){
        if((2<=t && t<=24) && (10<=x && x<=60)){
            zad=n-f;
            t=t*60;
            minuti=x*zad;
            if(t>minuti){
                cout<<"YES"<<endl;
                cout<<(t-minuti)-60;
            }
            if(minuti>t){
                cout<<"NO"<<endl;
                cout<<(minuti-t)+60<<endl;
                cout<<zad-((t-(minuti-t))/x-1);
            }
            if(minuti==t){
                cout<<"EXACT!";
            }
        }
}
return 0;
}
