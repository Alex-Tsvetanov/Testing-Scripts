#include<iostream>
using namespace std;
int main() {
    long long n,sistema,chislo,res,stepen;
    bool imaDrugi;
    cin>>n>>sistema;
    for(long long a=1; a<=n; a++) {
        chislo=a;
        res=0;
        stepen=1;
        while(chislo>0) {
            res+=stepen*(chislo%sistema);
            chislo/=sistema;
            stepen*=10;
        }
        imaDrugi=false;
        while(res>0) {
            if(res%10>1) {
                imaDrugi=true;
            }
            res/=10;
        }
        if(!imaDrugi) {
            cout<<a<<endl;
        }
    }
    return 0;
}
