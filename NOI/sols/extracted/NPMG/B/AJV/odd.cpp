#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
long long n;
string s;
vector<long long>otg;
long long seg=1,seg2;
int main(){
//ios::sync_with_stdio(false);
cin>>n;
for(long long i=0;i<n;i++){
    cin>>s;
    seg=1;
    seg2=0;
    for(long long r=0;r<s.size();r++){
        if(s[r]=='+'){
            if((s[r-1]-'0')%2==0){
                seg=0;
            }
            seg2+=seg;
            seg=1;
        }
        if(s[r]=='*'){
            if((s[r-1]-'0')%2==0){
                seg=0;
            }
        }
    }
            if((s[s.size()-1]-'0')%2==0){
                seg=0;
            }
    seg2+=seg;
    otg.push_back((seg2%2));
}
for(long long i=0;i<n;i++){
    cout<<otg[i]<<"\n";
}
return 0;
}
/*
2
5+5*6+3
123+6*7*8*9
*/
