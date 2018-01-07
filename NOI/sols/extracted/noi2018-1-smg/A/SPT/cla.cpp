#include<iostream>
#include<vector>
using namespace std;
struct point
{
    long long x, y;
};
vector<point> p;
long long licekvadrat(point a, point b)
{
    return (a.x+b.x)*(a.y-b.y)/2;
}
int main(){

cin.tie(0);
ios::sync_with_stdio(false);

string str;
cin>>str;
if(str[0]=='+' || str[0]=='-'){}
else str = "+"+str;
str+="+";
int posokaX[4]={1,0,-1,0};
int posokaY[4]={0,1,0,-1};
long long curr=0;
int curr_d=0;
p.push_back({0,0});
for(int i=1;i<str.size();i++)
{
    if(str[i]=='+' || str[i]=='-')
    {
        p.push_back({p[p.size()-1].x + curr*posokaX[curr_d] , p[p.size()-1].y + curr*posokaY[curr_d]});
       // cout<<curr<<endl;
        curr=0;
        if(str[i]=='+') curr_d=(curr_d+1)%4;
        else
        {
            curr_d--;
            if(curr_d<0) curr_d = 3;
        }
    }
    else
    {
        if(str[i-1]=='+' || str[i] == '-')
        {
            curr = str[i]-'0';
        }
        else
        {
            curr*=10;
            curr+=str[i]-'0';
        }
    }
}/*
for(int i=0; i<p.size();i++)
{
    cout<<p[i].x<<" "<<p[i].y<<endl;
}*/
long long otg = 0;
for(int i=0; i<p.size()-1;i++)
{
    otg+=licekvadrat(p[i], p[i+1]);
}
if(otg<0) otg*=-1;
cout<<otg<<endl;
return 0;
}
