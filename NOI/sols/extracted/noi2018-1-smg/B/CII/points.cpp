///CECOBORECO
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int n,m;
int rect[10001][2];
int br;
int binary_s(int w)
{
    int low=0;
    int big=n-1;
    int mid=(low+big)/2;
    while(big!=low)
    {

        if(rect[mid][0]<w)
        {
            low=mid+1;
        }
        else
        {
            if(rect[mid][0]>w)
                big=mid-1;
        }
        mid=(low+big)/2;
        //cout<<low<<" "<<mid<<" "<<big<<" "<<w<<endl;
        if(rect[mid][0]==w)
            return mid;
    }
    return mid;
}
int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    int x,y;
    cin>>x>>y;
    rect[0][0]=x;
    rect[0][1]=y;
    for(int i=1; i<n; i++)
    {
        cin>>x>>y;
        rect[i][0]=rect[i-1][0]+x;
        rect[i][1]=y;
    }
    int k=0;
    for(int i=0; i<m; i++)
    {
        cin>>x>>y;
        if(x<=rect[n-1][0])
        {
            k=binary_s(x);
            if(x==rect[k][0])
            {
                if(k!=n-1)
                {
                    if(y<=rect[k][1] || y<=rect[k+1][1])
                    {
                        br++;
                        //cout<<"|";
                    }
                    //cout<<k<<" "<<x<<"|\n";
                }
                else
                {
                    if(y<=rect[k][1])
                        br++;
                }
            }
            else
            {
                if(y<=rect[k][1])
                {
                    br++;
                    //cout<<x<<" ";
                }
            }
        }
    }
    cout<<br<<endl;
    return 0;
}
/**
4 8
2 3
3 6
2 4
4 2
1 2
3 7
4 2
5 8
7 4
9 1
9 5
12 8

1 4
2 3
1 2
3 7
1 2
0 3

4 5
2 3
3 6
2 4
4 2
2 6
5 6
7 4
11 2
12 2
*/
