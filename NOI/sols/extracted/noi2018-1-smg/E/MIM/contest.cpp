#include <iostream>
using namespace std;
int main(){
int n,t,f,x,ostT,ostN,ostZad;
cin>>n>>t>>f>>x;

t=t*60;
ostT=t-60;
ostN=n-f;
if(ostT-(x*ostN)>0){
    cout<<"YES"<<endl<<ostT-(x*ostN);
}
if(ostT-(x*ostN)==0){
    cout<<"EXACT!";
}
ostZad=((ostT-(x*ostN))-(ostT-(x*ostN))-(ostT-(x*ostN)))/x;
if(ostT-(x*ostN)<0){
        if(((ostT-(x*ostN))-(ostT-(x*ostN))-(ostT-(x*ostN)))%x>0){
            ostZad=ostZad+1;
        }
    cout<<"NO"<<endl<<(ostT-(x*ostN))-(ostT-(x*ostN))-(ostT-(x*ostN))<<endl<<ostZad;
}
return 0;
}
