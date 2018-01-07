#include<iostream>
int main (){
    long long n;
    std::cin>>n;
        if(n%3==0){
            std::cout<<"0"<<" "<<n/3;
        }else{
            if(n%3==1){
                std::cout<<"2"<<" "<<n/3-1;
            }else{
                if(n%3==2){
                    std::cout<<"1"<<" "<<n/3;
                }
            }
        }

    return 0;
}
