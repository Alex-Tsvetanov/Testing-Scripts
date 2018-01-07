#include<iostream>
using namespace std;
int main(){
long long n,t,f,x,ostzadachi,neresheni;
cin>>n>>t>>f>>x;
if(n>4 and n<101 and f>0 and f<n and t>1 and t<25 and x>9 and x<61){
   ostzadachi=n-f;
   t=t-1;
   if((x*ostzadachi)/60<t){
       cout<<"YES";
       cout<<endl<<t*60-(x*ostzadachi);
   }
   if((x*ostzadachi)/60==t){
       cout<<"EXACT!";
   }
   if((x*ostzadachi)/60>t){
       cout<<"NO";
       cout<<endl<<(x*ostzadachi)-t*60<<endl;
       neresheni=((x*ostzadachi)-t*60)/x;
       if(((x*ostzadachi)-t*60)%x>0){
           neresheni=neresheni+1;
           cout<<neresheni;
       }
   }
}
return 0;
}
