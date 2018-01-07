#include<iostream>
using namespace std;
int main(){
    long long digits[3];
    cin>>digits[0]>>digits[1]>>digits[2];
    for(long long j=0;j<3;j++){
        for(long long i=0;i<2;i++){
            if(digits[i]<digits[i+1]){
                long long bufer;
                bufer=digits[i];
                digits[i]=digits[i+1];
                digits[i+1]=bufer;
            }
        }
    }
    cout<<digits[0]*100+digits[1]*10+digits[2];

    return 0;
}
