#include<iostream>
using namespace std;
int main(){
long long n,dvoinistai,mestavdvoinistai,mestavtroinistai,troinistai;
cin>>n;
troinistai=0;
dvoinistai=0;
if(2<=n and n<=100){


while(n>0 ){
if(n%3==0){
    troinistai++;
    }else{
        dvoinistai++;
    }

n=n-(troinistai*3+dvoinistai*2);
}
cout<<dvoinistai<<" "<<troinistai;

}else{
 cout<<"Nemoje";
}
return 0;
}
