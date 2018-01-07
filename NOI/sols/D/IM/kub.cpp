#include<iostream>
using namespace std;
int main()
{
long long A,B,C,broiKubcheta,brOcveteniSteni,kubchetaS0Steni,kubchetaS1Stena,kubchetaS2Steni,kubchetaS3Steni,kubchetaS4Steni,kubchetaS5Steni,kubchetaS6Steni;
cin>>A>>B>>C;
brOcveteniSteni=2*(A*B+A*C+B*C);
broiKubcheta=A*B*C;
kubchetaS4Steni=0;
kubchetaS5Steni=0;
kubchetaS6Steni=0;
kubchetaS3Steni=8;
kubchetaS2Steni=4*(A-2)+4*(B-2)+4*(C-2);
kubchetaS1Stena=brOcveteniSteni-(3*kubchetaS3Steni+2*kubchetaS2Steni);
kubchetaS0Steni=broiKubcheta-(kubchetaS1Stena+kubchetaS2Steni+kubchetaS3Steni+kubchetaS4Steni+kubchetaS5Steni+kubchetaS6Steni);
cout<<kubchetaS0Steni<<" "<<kubchetaS1Stena<<" "<<kubchetaS2Steni<<" "<<kubchetaS3Steni<<" "<<kubchetaS4Steni<<" "<<kubchetaS5Steni<<" "<<kubchetaS6Steni;
return 0;
}
