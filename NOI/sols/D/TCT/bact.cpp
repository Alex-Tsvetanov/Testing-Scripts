#include <iostream>
using namespace std;

int main(){
    long long bakt, deca, vzim, ost, dni;
    cin>>bakt>>deca>>vzim>>ost>>dni;

    for(;dni>0;dni--){
        ///
        bakt=(bakt*(deca+1))-vzim;
        ///
        if((bakt*(deca+1))-vzim==bakt){
            cout<<bakt;
            return 0;
        }
        ///
        if(bakt>ost){
            bakt=ost;
            if((ost*(deca+1))-vzim>=ost){
                cout<<bakt;
                return 0;
            }
        ///
        }
        if(bakt<=0){
            cout<<0;
            return 0;

        }
        ///
    }
    cout<<bakt;
}
