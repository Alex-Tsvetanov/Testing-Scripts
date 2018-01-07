#include <iostream>
using namespace std;
int main (){
int a,b,c;
cout<<"Vuvedete 3 chisla:";
cin>>a>>b>>c;
if (a>b && a>c){
	if(b<c){
		cout<<a<<c<<b;
	}else
	cout<<a<<b<<c;
}
if (b>c&&b>a){
	if(c>a){
		cout<<b<<c<<a;
	}else
	cout<<b<<a<<c;
}
if(c>a&&c>b){
	if(a>b){
		cout<<c<<a<<b;
	}else
	cout<<c<<b<<a;
}
return 0;
}

