#include<iostream>
using namespace std;
int  main()
{
    int long long N,K,cloning1,n=1,k=1,cloning2,brl,brd;
    cin>>N>>K;
    cloning1=N;
    cloning2=K;
    int long  chuski[n];
    int long  torta [k];
    for(cloning1; cloning1>0; cloning1--)
    {
        cin>> chuski [n];
        n++;
    }
    for(cloning2; cloning2>0; cloning2--)
    {
        cin>> torta [k];
        k++;
    }
    int cloning3=1;
    do
    {

        brl=0;
        brd=0;
        int j,i;
        j=torta [cloning3];
        i=chuski[j];
        int cloning4=1;
        for(cloning4;cloning4<j-1;cloning4++){
             if(chuski[cloning4]==i) brl++;
        }
         int cloning5=j+1;
        for(cloning5;cloning5<n;cloning5++){
             if(chuski[cloning5]==i) brd++;
        }
        cout<<brl<<" "<<brd<<endl;
        cloning3 ++;
    }
while(cloning3<k);


    return 0;
}
