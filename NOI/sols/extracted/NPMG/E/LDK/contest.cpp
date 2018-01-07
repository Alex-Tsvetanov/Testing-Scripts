#include <iostream>
using namespace std;
int main(){
long long f,t,x,n,ost,i,b;
cin >> n >> t >> f >> x;
if (n>=5 && n<=100 && f>=1 && f <n && t>=2 && t <=24 && x >=10 && x<=60){
ost = n-f;
if (ost * x +60 ==t*60){
    cout << "EXACT!";
}
if (ost*x + 60 <t*60){
    cout << "YES" << endl;
    cout << t* 60 - (ost*x + 60);
    cout << endl;
}
if (ost*x + 60 >t*60){
    cout << "NO" << endl;
    cout <<(ost*x + 60)-t*60<< endl;
    i=(ost * x + 60) - t*60  ;
    b=i/x;
    cout << ost - b;
}
}
else {
    cout << "enter is wrong";
}
return 0 ;
}
