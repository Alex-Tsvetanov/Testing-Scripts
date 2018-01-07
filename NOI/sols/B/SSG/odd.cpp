#include <iostream>

using namespace std;

int f(string s,int num,int l,int r){
    if(l==r)return num;
    
    int tempNum = 0;
        int j = l;
        while(s[j]!='+' || s[j]!='*'){
            tempNum+=tempNum*10+(int)s[j];
            j++;
        }

        
        if(s[j]=='+'){
            return tempNum + f(s,tempNum,l+1,r);
        }
        if(s[j]=='*'){
            return tempNum * f(s,tempNum,l+1,r);
        }
}

int main(){

    int total = 0;

    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;++i)cin>>s[i];

    for(int i = 0; i<n;i++){
        string sa = s[i];
        int num = 0;
        cout<<f(sa,num,0,2);
    }

    cout<<total;
    return 1;
}