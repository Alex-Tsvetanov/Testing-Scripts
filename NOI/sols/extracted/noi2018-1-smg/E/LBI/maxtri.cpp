#include<iostream>
using namespace std ;
int main() {
    long long a,b,c,s[3],buff;
    cin>>a>>b>>c;
    s[0]=a;
    s[1]=b;
    s[2]=c;
    if(s[1]>s[0]) {
        buff=s[0];
        s[0]=s[1];
        s[1]=buff;
    }
    if(s[0]<s[2]) {
        buff=s[0];
        s[0]=s[2];
        s[2]=buff;
    }
    if(s[1]<s[2]) {
        buff=s[1];
        s[1]=s[2];
        s[2]=buff;
    }
    cout<<s[0]<<s[1]<<s[2]<<endl;
    return 0;
}
