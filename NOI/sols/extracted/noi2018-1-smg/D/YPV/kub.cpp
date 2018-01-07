#include<iostream>
using namespace std;
int main(){
    long long A,B,C;
    cin>>A>>B>>C;
    long long steni[7]={0,0,0,0,0,0,0};
    if(A==1 or B==1 or C==1){
        if(A==1 and B!=1 and C!=1){
            steni[2]=(B-2)*(C-2);
            steni[3]=2*((B-2)+(C-2));
            steni[4]=4;
        }
        if(A!=1 and B==1 and C!=1){
            steni[2]=(A-2)*(C-2);
            steni[3]=2*((A-2)+(C-2));
            steni[4]=4;
        }
        if(A!=1 and B!=1 and C==1){
            steni[2]=(A-2)*(B-2);
            steni[3]=2*((A-2)+(B-2));
            steni[4]=4;
        }
        if(A==1 and B==1 and C!=1){
            steni[4]=C-2;
            steni[5]=2;
        }
        if(A==1 and B!=1 and C==1){
            steni[4]=B-2;
            steni[5]=2;
        }
        if(A!=1 and B==1 and C==1){
            steni[4]=A-2;
            steni[5]=2;
        }
        if(A==1 and B==1 and C==1){
            steni[6]=1;
        }
        cout<<steni[0];
        for(int i=1;i<7;i++){
            cout<<" "<<steni[i];
        }
        cout<<endl;
        return 0;
    }
    steni[0]=(A-2)*(B-2)*(C-2);
    steni[1]=2*((A-2)*(B-2)+(B-2)*(C-2)+(A-2)*(C-2));
    steni[2]=4*((A-2)+(B-2)+(C-2));
    steni[3]=8;
    cout<<steni[0];
    for(int i=1;i<7;i++){
        cout<<" "<<steni[i];
    }
    cout<<endl;
return 0;
}
