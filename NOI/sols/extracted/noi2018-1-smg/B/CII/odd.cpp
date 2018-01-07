///CECOBORECO
#include<iostream>
using namespace std;
int nown;
string s;
int t;
bool is_c;
bool in;
int main()
{
    ios::sync_with_stdio(false);
    cin>>t;
    nown=2;
    is_c=0;
    for(int t1=0; t1<t; t1++)
    {
        cin>>s;
        s+=".";
        int i=0;
        int l=s.size();
        in=0;
        while(i<l-1)
        {
            while(s[i]>='0' && s[i]<='9')
            {
                i++;
            }
            if(s[i-1]=='1' || s[i-1]=='3' || s[i-1]=='5' || s[i-1]=='7' || s[i-1]=='9')
            {
                nown=1;
            }
            else
            {
                nown=0;
            }

            if(s[i]=='*')
            {
                i++;
                //cout<<s[i-2]<<" "<<nown<<" ";
                if(nown==0)
                    is_c=1;
                else
                    is_c=0;
                while(s[i]!='+' && s[i]!='.')
                {
                    i++;
                    int nown1=2;
                    while(s[i]>='0' && s[i]<='9')
                    {
                        i++;
                    }
                    if(s[i-1]=='1' || s[i-1]=='3' || s[i-1]=='5' || s[i-1]=='7' || s[i-1]=='9')
                    {
                        nown1=1;
                    }
                    else
                    {
                        nown1=0;
                    }
                    if(nown1==0)
                        is_c=1;
                }
                i++;
                if(is_c==0)
                {
                    if(in==1)
                        in=0;
                    if(in==0)
                        in=1;
                }
            }
            else
            {
                i++;
                if(nown==1)
                    if(in==1)
                        in=0;
                    else
                        in=1;
            }
        }
        cout<<in<<endl;
    }
    return 0;
}
