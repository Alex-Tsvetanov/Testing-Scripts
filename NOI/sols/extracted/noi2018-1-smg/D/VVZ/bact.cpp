#include <iostream>
using namespace std;
int main(){
int a,b,c,d,k;
cin >> a >> b >> c >> d >> k ;
for(int i=0;i<k;i++){
	a=a*b;
	a=a-c;
	if(a>d){
		a=d;
	}
}

 if(a<c){
	cout << 0;
 }else{
cout << a;}
 return 0;
}
