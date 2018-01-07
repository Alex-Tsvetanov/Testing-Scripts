#include<iostream>
using namespace std;
int main()
{
long long n, t, f, x, ostavastizadaci, ostavastovreme, cqlovreme, vremevtoracast, neresenizadaci;
cin>>n>>t>>f>>x;
t=t*60;
ostavastizadaci=n-f;
vremevtoracast=ostavastizadaci*x;
cqlovreme=vremevtoracast+60;
if(cqlovreme!=t){
if(cqlovreme<t){
ostavastovreme=t-cqlovreme;
cout<<"Yes "<<ostavastovreme;
}else{
ostavastovreme=cqlovreme-t;
neresenizadaci=ostavastizadaci-(ostavastovreme/x);
cout<<"NO "<<ostavastovreme<<" "<<neresenizadaci;
}
}else{
cout<<"EXACT";
}

return 0;
}
