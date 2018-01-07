#include <iostream>
using namespace std;
int main () {
long long n, t, f, x, z_2, min_za_2, min_za_s;
cin>>n>>t>>f>>x;
if((n>=5) and (n<=100) and (f>=1) and (f<n) and (t>=2) and (t<=24) and (x>=10) and (x<=60)){
    min_za_s=t*60;
    z_2=n-f;
    min_za_2=z_2*x;
    if(min_za_2<=(min_za_s-61)){
        cout<<"YES"<<endl<<min_za_s-(min_za_2+60);
    }
    if((min_za_2+60)/60==t){
        cout<<"EXACT!";
    }
    if((min_za_2+60)>min_za_s){
        if(((min_za_2+60)-min_za_s)%x==0){
            cout<<"NO"<<endl<<(min_za_2+60)-min_za_s<<endl<<((min_za_2+60)-min_za_s)/x;
        }else{
            cout<<"NO"<<endl<<(min_za_2+60)-min_za_s<<endl<<(((min_za_2+60)-min_za_s)/x)+1;
        }
    }
}

return 0;
}
