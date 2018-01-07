#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n=0,t=0,f=0,x=0;    float a;
    cin>>n;
    cin>>t;
    cin>>f;
    cin>>x;

    if((n<5 || n>100) || (f<1 || f>n) || (t<2 || t>24) || (x<10 || x>60)){
        cout<<"Error"<<endl;
    }
    else{

    if(60+(n-f)*x<t*60){
        cout<<"YES"<<endl;
        cout<<t*60-(60+((n-f)*x))<<endl;
    }
    else{
        if(60+(n-f)*x>t*60){
            cout<<"NO"<<endl;
            cout<<(60+((n-f)*x))-t*60<<endl;
            a=(((n-f)*x)-(t-1)*60);
            cout<<ceil(a/45);
        }
        else{
            if(60+(n-f)*x==t*60){
                cout<<"EXACT!"<<endl;
            }
        }
    }

    return 0;
}
}
