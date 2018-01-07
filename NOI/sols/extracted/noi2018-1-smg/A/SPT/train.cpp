#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
int blq[100005];
int n;
int f()
{
    stack<int>c;
    int nexx=1;
    for(int i=0;i<n;i++)
    {
        while(blq[i]>=nexx && nexx<=n)
        {
            c.push(nexx);
            nexx++;
          //  cout<<"puham "<<nexx-1<<endl;
        }
       // cout<<"---\n";
        if(blq[i]!=c.top()) return false;
        c.pop();
    }
    return true;
}
int main(){
cin.tie(0);
ios::sync_with_stdio(false);
cin>>n;
for(int j=0;j<5;j++)
{
    for(int i=0;i<n;i++)
    {
        cin>>blq[i];
    }
    cout<<f();
}
cout<<endl;

return 0;
}
