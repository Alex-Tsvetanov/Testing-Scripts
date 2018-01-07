#include<iostream>
#include<algorithm>
bool alr[25001];
int nums[100002];
int cnt=0;
int main(){
    int n,k;
    std::cin>>n>>k;
    int a;
    for(int i=0;i<n;i++){
        std::cin>>a;
        if(!alr[a]){
            cnt++;
            alr[a]=1;
        }
        nums[i]=a;
    }
    std::sort(nums,nums+n);
    int prev=-1;
    for(int i=0,j=0;i<n && j<k;i++){
        if(nums[i]!=prev){
            std::cout<<nums[i]<<" ";
            j++;
            cnt--;
            prev=nums[i];
        }else{
            if(cnt+j<k){
                std::cout<<nums[i]<<" ";
                j++;
            }
        }
    }
    std::cout<<std::endl;
    return 0;
}
