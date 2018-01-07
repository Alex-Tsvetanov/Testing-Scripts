#include<iostream>
using namespace std;
int n,m,w[10000],y[1000000],x[1000000],h[1000000];
int main()
{
    int br=0,dulj2=0;
    int duljina=0;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        cin>>w[i]>>h[i];


    }
    for(int j=0; j<m; j++)
    {
        cin>>x[j]>>y[j];
    }

    for(int i=0 ; i<n; i++)
    {
        duljina=duljina+w[i];
        //   cout<<duljina<<" ";
    }
    for(int i=0; i<n; i++)
    {
        dulj2=dulj2+h[i];

    }
    for(int j=0; j<m; j++)
    {


        if(x[j]<=duljina && y[j]<=dulj2)
        {
            br++;
        }
        else
        {
            continue;
        }

    }


    cout<<br<<endl;

    return 0;
}

