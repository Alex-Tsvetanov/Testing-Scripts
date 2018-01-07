#include<iostream>
using namespace std;
int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    string a;
    string b="";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int res=0;
        cin>>a;
        b="+";
        for(int k=1;k<a.size();k++)
        {
            if(a[k]>'9' or a[k]<'0')
            {
                b=b+char('0'+(a[k-1]-'0')%2);
                b=b+a[k];
            }
        }
        b=b+char('0'+(a[a.size()-1]-'0')%2);
        b=b+'+';
        //cout<<b;
        int lastplus=0;
        for(int j=1;j<b.size();j++)
        {
            if(b[j]=='+')
            {
                bool k=1;
                //cout<<"from"<<lastplus<<" to "<<j<<"=\n";
                for(int h=lastplus+1;h<j;h++)
                {

                    if(b[h]=='0')
                    {
                        k=0;
                        break;
                    }
                }
                //cout<<k<<endl;
                res+=k;
                res%=2;
                lastplus=j;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
