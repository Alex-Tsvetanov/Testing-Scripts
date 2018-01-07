#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int a,b,m;
    cin>>a>>b>>m;
    string nums[m];
    for(int i = 0;i < m;i++)
        cin>>nums[i];
    int factor = a+b;
    for(int i = 0;i < m;i++)
    {
        int mod = 0;
        for(int j = 0;j < nums[i].length();j++)
        {
            int curNum = nums[i][j]-'0';
            mod =(10*mod+curNum)%factor;
        }
        if(mod >= min(a,b))
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
    return 0;
}
