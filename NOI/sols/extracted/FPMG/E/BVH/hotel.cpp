#include<iostream>
using namespace std;
int main()
{
    int n,b=0;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
    }
    else
    {
        if((n+1)%3==0)
        {
            b=n-2;
            cout<<(n-2)/2<<" "<<b/3<<endl;
        }
        else
        {
            if((n+2)%3==0)
            {
                b=n-1;
                cout<<(n-3)/2<<" "<<(b/2)/3<<endl;
            }
            if((n+3)%3==0){
                    b=n;
                cout<<(n-3)<<" "<<b/3<<endl;
            }

        }
    }
    return 0;
}
