#include<iostream>
#include <cstdio>
#include <string>
using namespace std;
int fun1(){
    char a[10000];
    cin>>a;
    long long Num[10000],br=0,br2=0;;
    for(int i=1;a[i]!='\0';i++){
        if(a[i]=='+' || a[i]=='*'){
            i--;
            if(a[i]=='0'||a[i]=='2'||a[i]=='4'||a[i]=='6'||a[i]=='8'){
                Num[br]=0;
                br++;
            }else{
                Num[br]=1;
                br++;
            }
            i++;
            if(a[i]=='+'){
                Num[br]=3;
                br++;
            }else{
                Num[br]=4;
                br++;
            }
        }
    }
    Num[br]=3;
    br++;
    for(int i=1;Num[i]<br;i++){
        if(Num[i]==4){
            if(Num[i-1] == 0 ||Num[i+1] == 0){
                Num[i-1] = 0;
                Num[i+1] = 0;
            }
        }
        if(Num[i]==3){
            br2+=Num[i-1];
        }
    }
    return (br2%2);
}
int main(){
    long long n,a[12];
    cin>>n;
    for(int i=0;i<n;i++){
        a[i]=fun1();
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i+1!=n)cout<<endl;
    }
}
