#include <iostream>
using namespace std;
int main (){

int n,t,f,x,NeResheniZad;
cin >> n >> t >> f >> x ;

n=n-f;
t=t-1;

if (n*x<t*60){
t=(t*60)-(n*x);
cout <<"YES"<<endl<<t;
}
if (n*x==t*60){
    cout << "EXACT!" ;
}

if (n*x>t*60){
t=(n*x)-(t*60);
if(t%x!=0){
NeResheniZad = t/x + 1;
}else{
NeResheniZad = t/x;
}
cout << "NO" << endl << t << endl << NeResheniZad;
}

return 0;
}
