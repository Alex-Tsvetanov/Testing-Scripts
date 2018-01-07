#include <iostream>
using namespace std;

int main(){
    long long a,b,c,d,k,i,dali;
    cin >> a >> b >> c >> d >> k;
    for(i=0;i<k;i++){
        a*=b;
        if(a>c){
            a-=c;
        }else{
            cout << 0 << endl;
            return 0;
        }
        if(a>d){
            a=d;
            if(dali==i-1){
                cout << a << endl;
                return 0;
            }
            dali=i;
        }
    }
    cout << a << endl;
return 0;
}
