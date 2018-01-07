#include<iostream>
int nums[100];
long long numbers[1000];
long long maxNum=0;
int main()
{
    int n;
    std::cin>>n;
    for(int i=0; i<n; i++)
    {
        std::cin>>nums[i];
    }
    long long mult=1;
    long long currNum=0;
    for(int i=0; i<n; i++)
    {
        currNum=currNum*10+nums[i];
        mult*=10;
    }
    mult/=10;
    //std::cout<<currNum<<" "<<mult<<std::endl;
    for(int i=0; i<n; i++)
    {
        long long first=currNum/mult;
        currNum%=mult;
        currNum*=10;
        currNum+=first;
        if(currNum>maxNum)
        {
            maxNum=currNum;
        }
    }
    currNum=0;
    for(int i=n-1; i>=0; i--)
    {
        currNum=currNum*10+nums[i];
    }
    for(int i=0; i<n; i++)
    {
        long long first=currNum/mult;
        currNum%=mult;
        currNum*=10;
        currNum+=first;
        if(currNum>maxNum)
        {
            maxNum=currNum;
        }
    }
    std::cout<<maxNum<<std::endl;
    return 0;
}
