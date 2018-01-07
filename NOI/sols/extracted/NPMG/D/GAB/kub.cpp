#include<iostream>
using namespace std;

int main(){
long long a, b, c;

cin>>a;
cin>>b;
cin>>c;
long long wall[]={0, a*b-(a+b-3), a*c, c*b, a*b-(a+b)-1, a*c-(a-2+c*2), c*b-(c+b)*2+2};
cout<<wall[0]<<" "<<wall[1]<<" "<<wall[2]<<" "<<wall[3]<<" "<<wall[4]<<" "<<wall[5]<<" "<<wall[6];

return 0;
}
