#include<iostream>
using namespace std;
int main (){
int long long  A,B,C;
cin>>A>>B>>C;
if(A==1||B==1||C==1){
    if(A==1 && B==1 || A==1 && C==1|| B==1 && C==1 ){
        if(A==1 && B==1 && C==1 ) cout<<0<<" " <<0<<" " <<0<<" " <<0<<" " <<0<<" " <<0<<" " <<1;
        else cout<<0<<" " <<0<<" " <<0<<" " <<0<<" " <<A*B*C-2<<" " <<2<<" " <<0;
    }
else{ if(A==1)
    cout<<0<<" " <<0<<" " <<(B-2)*(C-2)<<" " <<2*(C-2+B-2)<<" " <<4<<" " <<0<<" " <<0;
    else{ if (B==1) cout<<0 <<" "<< 0<<" "<< (A-2)*(C-2)<<" " <<2*(A-2+C-2)<<" " <<4<<" " <<0<<" " <<0;
     else
cout<<0<<" " << 0<<" "<< (A-2)*(B-2)<<" " <<2*(A-2+B-2)<<" " <<4<<" " <<0<<" " <<0;
    }
}
}
else   //0                   //1                                  //2           //3//4 //5 //6
cout<<(A-2)*(B-2)*(C-2)<<" "<<(A-2)*(B-2)*2+(B-2)*(C-2)*2+(A-2)*2*(C-2)<<" " <<4*(A+B+C-6)<<" " <<8<<" " << 0<<" "<< 0<<" "<<0;







return 0;
}