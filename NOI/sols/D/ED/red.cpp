#include<iostream>
using namespace std;
int main()
{
    int N,K,br1=0,br2=0;
    cin>>N>>K;
    int a[N],b[K];
    for(int i=0; i<N; i++)
    {
        cin>>a[i];
    }
    for(int j=0; j<K; j++)
    {
        cin>>b[j];
for(int r=b[j]-2;r>-1;r--)
{
    if( a[r]==a[b[j]-1])
    {
        br1++;
    }

}
for(int z=b[j];z<N;z++)
{
    if( a[z]==a[b[j]-1])
    {
        br2++;
    }

}
cout<<br1<<" "<<br2<<endl;
br1=0;
br2=0;

    }
    return 0;
}
