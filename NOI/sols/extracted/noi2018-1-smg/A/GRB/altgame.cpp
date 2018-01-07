#include<iostream>
using namespace std;

void Igra(int a, int b,int x[],int i,int otg[],int m)
{
    for(int h=0; h<m;h++)
    {
       int y;
       y=x[i]%(a+b);
       if(((x[i]-y)+a)<=x[i]&&((x[i]-y)+b)>x[i])
       {
           otg[i]=1;
       }
       if(y<1&&a<b)
       {
           otg[i]=1;
       }

       i++;
    }
}

int main()
{
    int a=0;
    int b=0;
    int m=0;
    int i=0;
    cin>>a>>b>>m;
    if(a>100||b>100||m<1||m>10)
    {
          cout<<"invalid input";
    }
    int x[m];
    int otg[m];
    for(int i=0; i<m; i++)
    {
        cin>>x[i];
    }
    Igra(a, b, &x[0],i,&otg[0],m);
        for(int i=0; i<m; i++)
    {
        cout<<otg[i]<<endl;
    }

    return 0;
}
