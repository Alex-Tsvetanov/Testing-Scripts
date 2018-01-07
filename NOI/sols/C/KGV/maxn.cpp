#include <iostream>
using namespace std;
int main()
{
long long n,a,b,c;
cin>>n;
cout<<endl;
cin>>a>>b>>c;
if(a>=b>=c){
	cout<<a<<b<<c;
}
if(a>=c>=b){
	cout<<a<<c<<b;
}
if(b>=a>=c){
	cout<<b<<a<<c;
}
if(b>=c>=a){
	cout<<b<<c<<a;
}
if(c>=a>=b){
	cout<<c<<a<<b;
}
if(c>=b>=a){
	cout<<c<<b<<a;
}
return 0;
}

