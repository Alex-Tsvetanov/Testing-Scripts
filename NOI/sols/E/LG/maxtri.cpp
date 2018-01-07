#include<iostream>
int main (){
    long long a,b,c;
    std::cin>>a>>b>>c;
    if(a>=b and a>=c){
        std::cout<<a;
        if(b>=c){
              std::cout<<b<<c;
        }else{
            if(c>=b){
                std::cout<<c<<b;
            }
        }
    }else{
        if(b>=a and b>=c){
            std::cout<<b;
            if(a>=c){
                std::cout<<a<<c;
            }else{
                if(c>=a){
                    std::cout<<c<<a;
                }
            }
        }else{
            if(c>=a and c>=b){
                std::cout<<c;
                if(a>=b){
                    std::cout<<a<<b;
                }else{
                    if(b>=a){
                        std::cout<<b<<a;
                    }
                }
            }
        }
    }
    return 0;
}
