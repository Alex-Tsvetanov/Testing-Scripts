#include<iostream>
using namespace std;
int main(){
long long a,b,c,naiGlChislo,stot,des,ed;
cin>>a>>b>>c;
if(a>=b && a>=c && b>=c){
   stot=a*100;
   des=b*10;
   ed=c;
   naiGlChislo=stot+des+ed;
   cout<<naiGlChislo;
}else{
if(a>=b && a>=c && c>=b){
   stot=a*100;
   des=c*10;
   ed=b;
   naiGlChislo=stot+des+ed;
   cout<<naiGlChislo;
}else{
if(b>=a && b>=c && a>=c){
   stot=b*100;
   des=a*10;
   ed=c;
   naiGlChislo=stot+des+ed;
   cout<<naiGlChislo;
}else{
if(b>=a && b>=c && c>=a){
   stot=b*100;
   des=c*10;
   ed=a;
   naiGlChislo=stot+des+ed;
   cout<<naiGlChislo;
}else{
if(c>=a && c>=b && a>=b){
   stot=c*100;
   des=a*10;
   ed=b;
   naiGlChislo=stot+des+ed;
   cout<<naiGlChislo;
}else{
if(c>=a && c>=b && b>=a){
   stot=c*100;
   des=b*10;
   ed=a;
   naiGlChislo=stot+des+ed;
   cout<<naiGlChislo;
}}}}}}
return 0;
}
