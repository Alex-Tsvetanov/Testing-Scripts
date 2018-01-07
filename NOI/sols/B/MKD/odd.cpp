#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,l,c,d;
    char t[100000];
    cin>>n;
    bool ans[n];
    for(int i=0;i<n;i++)
    {
        cin>>t;
        l=0;
        c=1;
        for(int j=0;j<strlen(t);j++)
        {
            if(t[j]>='0' and t[j]<='9')
            {
                d=(t[j]-'0')%2;
                continue;
            }
            if(t[j]=='+')
            {
                if(d==0) c=0;
                l=(l+c)%2;
                c=1;
                continue;
            }
            if(t[j]=='*' and d==0) c=0;
        }
        if(d==0) c=0;
        l=(l+c)%2;
        ans[i]=l;
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<"\n";
    }
    return 0;
}
