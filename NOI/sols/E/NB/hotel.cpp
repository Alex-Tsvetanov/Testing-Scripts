#include<iostream>
using namespace std;
int main()
{
long long brUchenici,pomostna;
cin>>brUchenici;
cout<<endl;
for (int i=0;i<=brUchenici/2;i++)
{

    if ((brUchenici-i)%3==0)
    {
        cout<<i<<" "<<brUchenici/3<<endl;
    }
}
if(brUchenici%3==0)
{
    cout<<"0 "<<brUchenici/3<<endl;
}


return 0;
}
