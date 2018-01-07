#include<iostream>
using namespace std;
long long n,d,t;
int main ()
{
    cin>>n;
    if(n%3==0)
    {
        cout<<0<<" "<<n/3;
    }
    else{
        if((n%3+3)%2==0)
        {
            cout<<(n%3+3)%2<<" "<<n/3-1;
        }


    }
        return 0;
}


