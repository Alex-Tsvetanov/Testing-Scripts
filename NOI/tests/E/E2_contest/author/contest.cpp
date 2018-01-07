//Task: contest
//Author: Plamenka Hristova
//
#include <iostream>
using namespace std;
int main()
{
 int f,t,n,tz,ost,tmin,tostz;
 int timebefor, minnedost;
 cin>>n>>t>>f>>tz;
 ost=n-f;
 t--;
 tmin=t*60;
 tostz=tz*ost;
 if(tmin>tostz){
    timebefor=tmin-tostz;
    cout<<"YES"<<endl;
    cout<<timebefor<<endl;
    }
  else
    if(tmin==tostz) cout<<"EXACT!"<<endl;
     else
     {
      minnedost=tostz-tmin;
      cout<<"NO"<<endl;
      cout<<minnedost<<endl;
      cout<<ost-tmin/tz<<endl;
     }
 }
