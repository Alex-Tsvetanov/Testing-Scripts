#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    long long x[6001],y[6001];
    int sizen = 1;
    x[0] = 0;
    y[0] = 0;
    int dir = 1;
    string in;
    cin>>in;
    int startInd = 0;
    if(in[0] == '+')
    {
        dir = 2;
        startInd = 1;
    }
    if(in[0] == '-')
    {
        dir = 4;
        startInd = 1;
    }
    for(int i = startInd;i < in.length();i++)
    {
        long long num=0;
        while(i<in.length() && in[i] != '+' && in[i] != '-')
        {
            num = num*10+(int)(in[i]-'0');
            i++;
        }
        if(dir == 1)
        {
            x[sizen] = x[sizen-1]+num;
            y[sizen] = y[sizen-1];
            if(in[i] == '+')
                dir=2;
            else
                dir=4;

        }
        else if(dir == 2)
        {
            y[sizen] = y[sizen-1]+num;
            x[sizen] = x[sizen-1];
            if(in[i] == '+')
                dir=3;
            else
                dir=1;
        }
        else if(dir == 3)
        {
            x[sizen] = x[sizen-1]-num;
            y[sizen] = y[sizen-1];
            if(in[i] == '+')
                dir=4;
            else
                dir=2;
        }
        else if(dir == 4)
        {
            y[sizen] = y[sizen-1]-num;
            x[sizen] = x[sizen-1];
            if(in[i] == '+')
                dir=1;
            else
                dir=3;
        }
        sizen++;
    }
    sizen--;
    long long area = 0;
    for(int i = 0;i < sizen;i++)
    {
        area += x[i]*y[i+1] - y[i]*x[i+1];
    }
    area/=2;
    area = abs(area);
    cout<<area;
    return 0;
}
