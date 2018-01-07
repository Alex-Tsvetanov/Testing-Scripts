#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a[n];
    string b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int el;
    for(int j=0; j<n; j++)
    {
        el=0;
        for(int i=1; i<=a[j].size(); i++)
        {

            if(((a[j][i]=='*')||(a[j][i]=='+')||(i==a[j].size()))&&(int(a[j][i-1])%2==0))
            {

                b[j][el]='2';
                if(i!=a[j].size())
                {
                    b[j][el+1]=a[j][i];
                }
                else
                {
                    b[j][el+1]='k';
                }
                el=el+2;
            }
            else
            {
                if(((a[j][i]=='*')||(a[j][i]=='+')||(i==a[j].size()))&&(int(a[j][i-1])%2!=0))
                {
                    b[j][el]='1';
                    if(i!=a[j].size())
                    {
                        b[j][el+1]=a[j][i];
                    }
                    else
                    {
                        b[j][el+1]='k';
                    }
                    el=el+2;
                }
            }
        }

    }

    for(int j=0; j<n; j++)
     {
         for(int i=0; i<100001; i++)
         {
             if(b[j][i]=='k')
             {
                 break;
             }
             if(b[j][i]=='*')
             {
                 if((b[j][i-1]=='1'&&b[j][i+1]=='2')||(b[j][i-1]=='2'&&b[j][i+1]=='1'))
                 {
                     b[j][i-1]='2';
                     b[j][i+1]='2';
                 }
             }
         }
     }

     for(int j=0; j<n; j++)
     {
         for(int i=0; i<100001; i++)
         {

             if(b[j][i]=='k')
             {
                 break;
             }
             if(b[j][i]=='+')
             {
                 if((b[j][i-1]=='1'&&b[j][i+1]=='2')||(b[j][i-1]=='2'&&b[j][i+1]=='1'))
                 {

                     b[j][i-1]='1';
                     b[j][i+1]='1';

                     int o=i+2;
                     while(b[j][o]!='+'&&b[j][o]!='k')
                     {
                         if(b[j][o]!='*')b[j][o]='1';
                         o++;
                     }



                 }
                 else
                 {
                     if(b[j][i-1]=='1'&&b[j][i+1]=='1')
                     {
                         b[j][i-1]='2';
                         b[j][i+1]='2';
                         int s=i+2;
                         while(b[j][s]!='+'&&b[j][s]!='k')
                         {
                             if(b[j][s]!='*')b[j][s]='2';
                             s++;
                         }


                     }
                 }
             }
         }
     }
    for(int j=0; j<n; j++)
     {
         for(int i=0; i<100001; i++)
         {
             if(b[j][i]=='k')
             {
                 if(b[j][i-1]=='2')
                 {
                     cout<<0<<endl;
                 }
                 else
                 {
                     cout<<1<<endl;
                 }
                 break;
             }
         }
     }

    return 0;
}
