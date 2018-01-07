#include <iostream>
#include<string>
#include<sstream>
#include<cstring>

using namespace std;

int main()
{

    int n;

    cin>>n;
    string str[n];
    string ch[n];
    string sym[100];
    long long chS [100][100],cs=0;
    long otg[n];
    memset(chS,0,sizeof chS);
    memset(otg,0,sizeof otg);

    for(int i=0; i<n; i++)
    {
        cin>>str[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<str[i].length(); j++)
        {
            if(str[i][j] != '+' && str[i][j] != '*')
            {
                ch[i]+=str[i][j];
            }
            else
            {
                sym[i]+=str[i][j];
                ch[i] += ' ';
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        string chV;
        for(int j=0; j<ch[i].length(); j++)
        {
            if(ch[i][j] != ' ')
            {
                chV += ch[i][j];
            }
            else
            {
                stringstream(chV) >> chS[i][cs];
                cs++;
                chV.clear();
            }
        }
        cs=0;
    }
    for(int i=0; i<n; i++)
    {
        string chV;
        for(int j=0; j<ch[i].length(); j++)
        {
            if(ch[i][j] != ' ')
            {
                chV += ch[i][j];
            }
            else
            {
                stringstream(chV) >> chS[i][cs];
                cs++;
                chV.clear();
            }
        }
        cs=0;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(sym[i][j] == '*')
            {
                otg[i] += chS[i][j]*chS[i][j+1];
                //cout<<chS[i][j]<<" * "<<chS[i][j+1]<<endl;
            }
            if(sym[i][j] == '+')
            {
                otg[i] += chS[i][j]+chS[i][j+1];
                //cout<<chS[i][j]<<" + "<<chS[i][j+1]<<endl;
            }
        }
        //cout<<endl;
    }

    for(int i=0; i<n; i++)
    {
        if(otg[i]%2 == 0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }

    return 0;
}
