#include<iostream>
using namespace std;
int main() {
long long dvoinistai,troinistai;
long long otbor;
cin>>otbor;
troinistai=otbor/3;
if(otbor%3==0){
    cout<<0<<" "<<troinistai;
}
if(otbor%3==1){
    cout<<2<<" "<<troinistai-1;
}
if(otbor%3==2){
    cout<<1<<" "<<troinistai;
}
return 0;
}
