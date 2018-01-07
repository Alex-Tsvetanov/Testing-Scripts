#include <iostream>
#include<cstring>

using namespace std;

int main()
{

    int n,m,otg=0;

    cin>>n>>m;

    int kv[n][2],prodX[n],prodY[n];
    memset(prodX,0, sizeof prodX);
    memset(prodY,0, sizeof prodY);
    int points[m][2];

    for(int i=0; i<n; i++)
    {
        int w,h;
        cin>>w>>h;
        kv[i][0] = w;
        kv[i][1] = h;
    }
    for(int i=0; i<m; i++)
    {
        int x,y;
        cin>>x>>y;
        points[i][0] = x;
        points[i][1] = y;
    }
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            prodX[i] = kv[i][0];
        }
        else
        {
            prodX[i] = kv[i][0] + prodX[i-1];
        }
        prodY[i] = kv[i][1];
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(points[i][0] <= prodX[j] && points[i][0]>=(prodX[j]-kv[j][0]) && points[i][1] <= prodY[j] && points[i][1]>= 0)
            {
                otg++;
            }
        }
    }
    cout<<otg<<endl;

    return 0;
}
