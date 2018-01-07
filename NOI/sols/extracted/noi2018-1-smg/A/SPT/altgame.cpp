#include<iostream>
using namespace std;
int dp[1024];
int delene(string str, int a)
{
    int nexx=0;
    int curr=0;
    while(nexx<str.size())
    {
        while(curr<a && nexx<str.size())
        {
            curr*=10;
            curr+=str[nexx]-'0';
            nexx++;
        }
        //cout<<curr<<" "<<a<<" "<<curr/a<<endl;
        curr=curr%a;
    }
   // cout<<otg<<" "<<curr<<endl;
    return curr;
}
int main(){
cin.tie(0);
ios::sync_with_stdio(false);
long long  a,b;
cin>>a>>b;
for(int i=0; i<a+b; i++)
{
    if((i-a>=0 && dp[i-a]==2) ||(i-b>=0 && dp[i-b]==2)) dp[i]=1;
    else dp[i]=2;
    //cout<<dp[i]<<" ";
}
//cout<<endl;
int t;
cin>>t;
for(int i=0;i<t;i++)
{
    string n;
    cin>>n;
    cout<<dp[delene(n,a+b)]<<endl;
}
return 0;
}
