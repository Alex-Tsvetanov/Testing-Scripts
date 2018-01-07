#include<iostream>
using namespace std;

int main()
{
    long long a[100000]={-1},n,k,b[10000];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
        for(int i=0;i<k;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<k;i++)
    {
        int counter1=0,counter2=0;
        for(int j=1;j<b[i];j++)
        {

            if(a[j-1]==a[b[i]-1])
            {
                counter1++;
            }


        }
        cout<<counter1;
        for(int j=n;j>b[i];j--)
        {
            if(a[j-1]==a[b[i]-1])
            {
                counter2++;
            }


        }
        cout<<" "<<counter2;
        cout<<"\n";
    }
    return 0;
}
/*
10 4
2 1 3 2 2 5 4 2 3 5
1 7 4 10
*/
