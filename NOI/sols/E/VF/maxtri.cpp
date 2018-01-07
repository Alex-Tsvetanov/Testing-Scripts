#include<iostream>
using namespace std;
int a[3],br,ng,br1;
int main ()
{
    for(; br<3; br++)
    {
        cin>>a[br];
    }

    for(; br1<3; br1++)
    {
        for(br=0; br<3; br++)
        {
            if(a[br]>ng)
            {
                ng=a[br];
            }
        }
        cout<<ng;
        for(br=0; br<3; br++)
        {
            if(ng==a[br])
            {
                a[br]=-1;
                br=3;
            }
        }
        ng=0;
    }
    return 0;
}
