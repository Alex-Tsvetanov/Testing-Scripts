#include<iostream>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
if(a>=b and a>=c and b>=c){
    cout<<a*100+b*10+c;
}
else if(a>=b and a>=c and b<=c){
    cout<<a*100+c*10+b;
}
else if(b>=a and a>=c and c<=b){
    cout<<b*100+a*10+c;
}
else if(b>=a and a<=c and c<=b){
    cout<<b*100+c*10+a;
}
else if(c>=a and c>=b and a>=b){
    cout<<c*100+a*10+b;
}
else if(c>=a and c>=b and a<=b){
    cout<<c*100+b*10+a;
}
/*chisla[0]=a*100+b*10+c;
chisla[1]=a*100+c*10+b;
chisla[2]=b*100+c*10+a;
chisla[3]=b*100+a*10+c;
chisla[4]=c*100+a*10+b;
chisla[5]=c*100+b*10+a;
if(chisla[0]>chisla[1] && chisla[0]>chisla[2] && chisla[0]>chisla[3] && chisla[0]>chisla[4] && chisla[0]>chisla[5]){
    cout<<chisla[0];
}
else if(chisla[1]>chisla[0] && chisla[1]>chisla[2] && chisla[1]>chisla[3] && chisla[1]>chisla[4] && chisla[1]>chisla[5]){
    cout<<chisla[1];
}
else if(chisla[2]>chisla[0] && chisla[2]>chisla[1] && chisla[2]>chisla[3] && chisla[2]>chisla[4] && chisla[2]>chisla[5]){
    cout<<chisla[2];
}
else if(chisla[3]>chisla[0] && chisla[3]>chisla[1] && chisla[3]>chisla[2] && chisla[3]>chisla[4] && chisla[0]>chisla[5]){
    cout<<chisla[3];
}
else if(chisla[4]>chisla[0] && chisla[4]>chisla[1] && chisla[4]>chisla[2] && chisla[4]>chisla[3] && chisla[4]>chisla[5]){
    cout<<chisla[4];
}
else if(chisla[5]>chisla[0] && chisla[5]>chisla[1] && chisla[5]>chisla[2] && chisla[5]>chisla[3] && chisla[5]>chisla[4]){
    cout<<chisla[5];
}*/
return 0;
}
