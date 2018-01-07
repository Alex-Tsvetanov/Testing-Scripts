#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][2],b[m][2];
    int wi,hi;
    cin>>wi>>hi;
    a[0][0]=wi;
    a[0][1]=hi;
    int br=0;
    for(int i=1;i<n;i++)
    {
        cin>>wi>>hi;
        a[i][0]=wi+a[i-1][0];
        a[i][1]=hi;
    }
    for(int i=0;i<m;i++)
    {
        cin>>wi>>hi;
        b[i][0]=wi;
        b[i][1]=hi;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[i][0]<=a[j][0]&&b[i][1]<=a[j][1]){br++;break;}
        }
    }
    cout<<br<<endl;
    return 0;
}

