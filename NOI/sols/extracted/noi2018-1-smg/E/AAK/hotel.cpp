#include <iostream>
using namespace std;
int main (){
long long stai,vid1,vid2;
cin>>stai;
vid1=0;
vid2=0;
vid1=stai%3;
    vid2=stai/3;
if(vid1%2>0){
   vid2=vid2-1;
   vid1=vid1+1;
}
cout<<vid1<<" "<<vid2;
return 0;
}

