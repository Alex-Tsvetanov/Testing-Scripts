#include<bits/stdc++.h>
using namespace std;
char niz[20][1000000];
queue<char>novvs;
stack<char>novbezu;
long long otg[10000];
int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(0);
long long n,lenght=0,a=0;
char znak=0,purvo=0,vtoro=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>niz[i];
    lenght=strlen(niz[i]);
    for(int j=0;j<lenght;j++){
        if(j!=0 and niz[i][j]=='+' or niz[i][j]=='*'){
            a=niz[i][j-1]-'0';
            if(a%2==1){
                novvs.push('1');
            }else{
              novvs.push('0');
            }
            if(niz[i][j]=='+'){
            novvs.push('+');
            }else{
            novvs.push('*');
            }

        }
    }
    a=niz[i][lenght-1]-'0';
      if(a%2==1){
                novvs.push('1');
            }else{
              novvs.push('0');
            }

    while(novvs.empty()==false){
        znak=novvs.front();
        novvs.pop();

        if(znak=='*'){

            purvo=novbezu.top();
            vtoro=novvs.front();

            novbezu.pop();
            novvs.pop();
            if(purvo=='0' || vtoro=='0'){
                novbezu.push('0');
            }else{
             novbezu.push('1');
            }

        }else{
            novbezu.push(znak);

       }

    }
    a=0;
while(novbezu.empty()==false){
    znak=novbezu.top();
   novbezu.pop();
if(znak!='+'){
    a+=znak-'0';
    a%=2;
}
}
otg[i]=a;

}
for(int i=0;i<n;i++){
    cout<<otg[i]<<"\n";
}
return 0;
}
/*
2
5+5*6+3
123+6*7*8*9
*/
