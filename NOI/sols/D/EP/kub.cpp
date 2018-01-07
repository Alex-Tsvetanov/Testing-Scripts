#include <iostream>

using namespace std;

int main(){
    long long A,B,C,total,outer,iner;
    long long f0=0,f1=0,f2=0,f3=0,f4=0,f5=0,f6=0;
    cin>>A>>B>>C;
    total=A*B*C*6;
    outer=(A*B+A*C+B*C);
    iner=total-outer;
    if(A==2 and B>1 and C>1 or A>1 and B==2 and C>1 or A>1 and B>1 and C==2){
        f3=8;
        f2=4*(A-2)+4*(B-2)+4*(C-2);
        f1=outer-(f3+f2);
        cout << f0 <<" "<< f1 <<" "<< f2 <<" "<< f3 <<" "<< f4 <<" "<< f5 <<" "<< f6 << endl;
        return 0;
    }
    if(A>1 and B>1 and C>2){
        f3=8;
        f2=4*(A-2)+4*(B-2)+4*(C-2);
        f1=outer-(f3+f2);
        f0=(A-1)*(B-1)*(C-1);
        cout << f0 <<" "<< f1 <<" "<< f2 <<" "<< f3 <<" "<< f4 <<" "<< f5 <<" "<< f6 << endl;
        return 0;
    }

    if(A==1 and B>1 and C>1 or A>1 and B==1 and C>1 or A>1 and B>1 and C==1){
        f2=outer-(f4+f3);
        f3=2*(A-2)+2*(B-2)+2*(C-2);
        f4=4;
        cout << f0 <<" "<< f1 <<" "<< f2 <<" "<< f3 <<" "<< f4 <<" "<< f5 <<" "<< f6 << endl;
        return 0;
    }
    if(A==1 and B==1 and C>1 or A==1 and B>1 and C==1 or A>1 and B==1 and C==1){
        f4=(A-2)+(B-2)+(C-2);
        f5=2;
        cout << f0 <<" "<< f1 <<" "<< f2 <<" "<< f3 <<" "<< f4 <<" "<< f5 <<" "<< f6 << endl;
        return 0;
    }
    if(A==1 and B==1 and C==1){
        f6=1;
        cout << f0 <<" "<< f1 <<" "<< f2 <<" "<< f3 <<" "<< f4 <<" "<< f5 <<" "<< f6 << endl;
        return 0;
    }

    return 0;
}
