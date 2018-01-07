#include<iostream>
using namespace std;
int main()
{
    long long n,f,t,x,zdpv;
///n-broi zadachi,t e vremeto za sustezanieto,
///f e broi zadachi resheni v purviq chas na sustezanieto,
///x e broiqt minuti za,koito Petur shte reshi ostanalite zadachi
///zdpv e  broqt na zatachite prez ostanaloto vreme
    5<=n<=100;
    1<=f<n;
    2<=t<=24;
    10<=x<=60;
    cin>>n>>t>>f>>x;
    cout<<"Vremeto za rabota e: "<<t*60<<" minuti."<<endl;
    zdpv=n-f;
    cout<<"Broqt na reshenite zadachi prez ostanaloto vreme e: "<<zdpv<<endl;
    cout<<"============================================================"<<endl;
    if(t<x+60 and n>zdpv+f)
    {

        cout<<"NO";
    }
    else
    {
        1<=c1<=9;

        if(t<x+60 and n==zdpv+f)
        {
            cout<<"YES";
        }
        else
        {
            if(t==x+60 and n==zdpv+f)
            {
                cout<<"EXACT";
            }
        }
    }
    return 0;
}
