#include<iostream>
using namespace std;
int main()
{
    long long a,b,c;
    1<=a<10;
    1<=b<10;
    1<=c<10;
    cin>>a>>b>>c;
    if(a>b and b>c)
    {
        cout<<a;
        cout<<b;
        cout<<c;
     }
        if(a>c and c>b)
        {
        cout<<a;
        cout<<c;
        cout<<b;
        }
        if(b>a and a>c)
        {
            cout<<b;
            cout<<a;
           cout<<c;
       }
        if(b>c and c>a)
           {
            cout<<b;
            cout<<c;
            cout<<a;
           }
        if(c>a and a>b)
        {
            cout<<c;
            cout<<a;
            cout<<b;
        }
        if(c>b and b>a)
            {
            cout<<c;
            cout<<b;
            cout<<a;
            }
       // if(a=b and b>c and a>c)
          //// {
           // cout<<a;
           //cout<<b;
           // cout<<c;
          // }
    /// if(b=a and a<c)
          /// {
           /// cout<<c;
          //  cout<<b;
          //  cout<<a;
        //  }
        ///if(a=c and c>b)
           // {
          //  cout<<a;
            ///cout<<c;
           /// cout<<b;
           // }
       /// if(c=a and a<b)
           /// {
          ///  cout<<b;
           /// cout<<c;
           /// cout<<a;
         ///   }
       /// if(b=c and c>a)
          ///  {
         ///   cout<<b;
          ///  cout<<c;
          ///  cout<<a;
         ///   }
      ///  if(b=c and b<a)
          ///  {
          ///  cout<<a;
         //   cout<<b;
         //  cout<<c;
         //   }
return 0;
}
