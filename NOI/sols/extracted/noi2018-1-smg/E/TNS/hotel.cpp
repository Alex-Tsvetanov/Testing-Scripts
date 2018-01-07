#include <iostream>
using namespace std;
int main () {
long long n, dvoini=0, troini=0;
cin>>n;
if((n>=2) and (n<=100)){
    if(n%3==0){
        troini=n/3;
        cout<<dvoini<<" "<<troini;
    }
    if(n%3==1){
        if((n-3)%2==0){
            troini=(n-3)/3;
            dvoini=(n-(troini*3))/2;
            cout<<dvoini<<" "<<troini;
        }else{
            troini=(n-4)/3;
            dvoini=(n-(troini*3))/2;
            cout<<dvoini<<" "<<troini;
        }
    }
    if(n%3==2){
        troini=n/3;
        dvoini=(n-(troini*3))/2;
        cout<<dvoini<<" "<<troini;
    }
}


return 0;
}
