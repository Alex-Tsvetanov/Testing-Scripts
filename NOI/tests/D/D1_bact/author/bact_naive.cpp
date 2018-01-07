#include<iostream>
using namespace std;

long long int a,b,c,d,k;

int main()
{
  cin >> a >> b >> c >> d >> k;
  for(int i=1;i<=k;i++)
  {
    int t=a*b;
    if(t<c) {cout << 0 << endl; return 0;}
    t=t-c;
    if(t>d) t=d;
    a=t;
  }

  cout << a << endl;

}
