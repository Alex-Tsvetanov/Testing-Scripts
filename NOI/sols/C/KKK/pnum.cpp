#include<iostream>
long long doseg[100000002];
int main(){
    std::ios::sync_with_stdio(false);
    long long n,p;
    std::cin>>n>>p;
    long long curr=1;
    long long siz=0;
    while(curr<=n){
        std::cout<<curr<<"\n";
        doseg[siz]=curr;
        long long added=1;
        for(long long i=0;i<siz;i++){
            if(curr+doseg[i]<=n){
                std::cout<<curr+doseg[i]<<"\n";
                doseg[siz+i+1]=curr+doseg[i];
                added++;
            }else{
                break;
            }
        }
        siz+=added;
        curr*=p;
    }
    //std::cout.flush();
    return 0;
}
