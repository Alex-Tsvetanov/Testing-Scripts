#include<iostream>
using namespace std;
int main()
{
    long long broiChisla,broiZapitvania,predi=0,sled=0;
    cin>>broiChisla>>broiZapitvania;
    int a[broiChisla],b[broiZapitvania];
    for(int i=0; i<broiChisla; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<broiZapitvania; i++)
    {
        cin>>b[i];
    }
    for(int j=0; j<broiZapitvania; j++)
    {
        for(int i=0; i<b[j]-1; i++)
        {
            if(a[i]==a[b[j]-1])
            {
                predi++;
            }
        }
        for(int i=b[j]; i<broiChisla; i++)
        {
            if(a[i]==a[b[j]-1])
            {
                sled++;
            }
        }
        if(j==broiZapitvania-1)
        {
            cout<<predi<<" "<<sled;
        }
        else
        {
            cout<<predi<<" "<<sled<<endl;
        }
        sled=0;
        predi=0;
    }
    return 0;
}
