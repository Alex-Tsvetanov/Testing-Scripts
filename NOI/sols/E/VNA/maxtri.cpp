#include<iostream>
using namespace std;

int main(){
long long a,b,c,naiGolqmo,sbor=0;
cin>>a>>b>>c;
if(a>=b && a>=c){
   if(b>c){
        sbor=100*a+10*b+c;

        }else{
        sbor=100*a+10*c+b;

        }
}

else if(b>=a && b>=c){
        if(a>c){
        sbor=100*b+10*a+c;

        }else{
        sbor=100*b+10*c+a;

        }
}
else if(c>=a && c>=b){
        if(a>b){
        sbor=100*c+10*a+b;

        }else{
        sbor=100*c+10*b+a;

        }
}
cout<<sbor<<endl;

return 0;
}
