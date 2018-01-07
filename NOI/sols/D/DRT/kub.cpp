#include <iostream>

using namespace std;

int main()
{
    //long long A,B,C;
    long long strana[3];
    long int snula=0,sedna=0,sdve=0,stri=0,schetiri=0,spet=0,sshest=0;
    int i;
    cin>>strana[0]>>strana[1]>>strana[2];
    for(i=0;i<3;i++){
        if(strana[i]==1){
            if(strana[i+1]==1){
                if(strana[i+2]==1){
                    sshest++;
                    break;
                }else{
                    spet=2;
                    schetiri=strana[i+2]-2;
                    break;
                }
            }else{
                schetiri=4;
                stri=2*(strana[i+1]-2)+(strana[i+2]-2)*2;
                sdve=(strana[i+1]-2)*(strana[i+2]-2);
                break;
            }
        }else{
            snula=(strana[i]-2)*(strana[i+1]-2)*(strana[i+2]-2);
            sedna=2*((strana[i]-2)*(strana[i+1]-2)+(strana[i]-2)*(strana[i+2]-2)+(strana[i+1]-2)*(strana[i+2]-2));
            sdve=(strana[i]-2)*4+(strana[i+1]-2)*4+(strana[i+2]-2)*4;
            stri=8;
            break;
        }
    }
    cout<<snula<<" "<<sedna<<" "<<sdve<<" "<<stri<<" "<<schetiri<<" "<<spet<<" "<<sshest<<" "<<endl;
    return 0;
}
