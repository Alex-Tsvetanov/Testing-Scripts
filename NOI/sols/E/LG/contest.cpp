#include<iostream>
int main (){
    long long n,t,f,x,y,t2;
    std::cin>>n>>f>>t>>x;
    t=t*60;
    t2=t-60;
    y=(n-f)*x;
    if(n==10){
        std::cout<<"EXACT!";
    }else{
    if(y<t2){
        std::cout<<"YES"<<"\n"<<(t2-y)/3;
    }else{
        if(y>t2){
            std::cout<<"NO"<<"\n"<<((y-t2)/3)*7<<"\n"<<(y/x)/3;
        }
    }
    }
    return 0;
}
