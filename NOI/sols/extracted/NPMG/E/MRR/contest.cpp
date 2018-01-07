#include<iostream>
using namespace std;
int main ()
{
 long long n,t,f,x;
  cin>>n>>t>>f>>x;
  {
      if (t*60-60+(n-f)*x>0)
    cin>>"YES";
  cin>>t*60-60+n-f*x;
  }
    {
     if (t*60-60+(n-f)*x=0)
     cin>>"EXACT";
    }
      {
       if(t*60<60+(n-f)*x)
       cin>>"NO";



      }























    return 0;
}
