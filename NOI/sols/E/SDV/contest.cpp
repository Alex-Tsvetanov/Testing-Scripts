#include<iostream>
using namespace std;
int main (){
         long long n,t,f,x;
         cin>>n>>t>>f>>x;
         if((t*60-60)-(n-f)*x>0){
            cout<<"YES"<<endl;
            cout<<(t*60-60)-(n-f)*x;
         }if((t*60-60)-(n-f)*x==0){
              cout<<"EXACT!";
         }
         if((t*60-60)-(n-f)*x<0){
            cout<<"NO"<<endl;
            cout<<(n-f)*x-(t*60-60)<<endl;
            if(((n-f)*x-(t*60-60))%x!=0){
            cout<<((n-f)*x-(t*60-60))/x+1;
            }else{
               cout<<((n-f)*x-(t*60-60))/x;
            }
         }
return 0;
}
