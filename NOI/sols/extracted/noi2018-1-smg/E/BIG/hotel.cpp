#include<iostream>;
using namespace std;
int main() {
long long uch,dvStai,trStai;
cin>>uch;
dvStai=0;
trStai=0;

while(uch%3!=0){
    uch=uch-1;
    dvStai=dvStai+1;
}
if(uch%3==0){
    trStai=uch/3;
}
cout<<dvStai<<" "<<trStai;

return 0;
}
