#include <iostream>
using namespace std;
int main(){
int r,n,t,pochivka,f,x;
cout<<"Vyvedete broqt na zadachite,vremeto(chasove)za tqh,lesnite zadachi i broi minuti v koito shte reshavash drugite zadachi";
cin>>n>>t>>f>>x;
///Vyvedete broqt na zadachite,vremeto(minuti)za tqh,lesnite zadachi i broi minuti v koito shte reshavash drugite zadachi
while(5>n or n>100){
cout<<"vuvedete otnovo broqt na zadachite:";
cin>>n;
}
while(1>f or f>n){
cout<<"Vuvedete otnovo vremeto za tqh v minuti:";
	cin>>f;
}
while(10>x or x>60){
cout<<"Vuvedete vreme za koeto shte reshavate nepoznatite zadachi:";
	cin>>f;
}
while(2>t or t>24){
cout<<"Vuvedete otnovo produljitelnosta na sustezanieto :";
	cin>>f;
}
r=(f-1)*59;
if (t-1>(n-f)*x){
cout<<"YES";
}else
if(r==(n-f)*x){
	cout<<"Exact!";
}else
if(r<(n-f)*x){
	cout<<"No";
}
return 0;
}
