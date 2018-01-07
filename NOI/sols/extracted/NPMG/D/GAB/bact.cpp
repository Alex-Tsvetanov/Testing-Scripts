#include<iostream>
using namespace std;

int main(){
long long a, b, c, d, k;
long long sum=0;

cin>>a;
cin>>b;
cin>>c;
cin>>d;
cin>>k;
long long time=k;
//a*b-c if(<c){=0; end} if(>d){=d}
while(time>0){
    --time;
    sum=a*(b+k);
    if(a*b<c){
        sum=0;
        goto end;
    }
    sum-c;
    if(sum>d){
        sum=d;
    }
    if(time<=0)
        break;
}
end:
cout<<sum;

return 0;
}
