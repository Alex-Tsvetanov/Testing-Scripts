#include<iostream>
#include<string>
using namespace std;
long long delenie(string x, long long a){
    long long nastoyashto=0, dokade=0;
    while(dokade<x.size()){
        while(dokade<x.size()&&nastoyashto<a){
            nastoyashto*=10;
            nastoyashto+=x[dokade]-'0';
            dokade++;
        }
        nastoyashto%=a;
    }
    return nastoyashto;
}
int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b, m;
    cin>>a>>b>>m;
    if(b<a){
        b^=a;
        a^=b;
        b^=a;
    }
    for(int wrquke=0;wrquke<m;wrquke++){
        string s;
        cin>>s;
        bool nim[250];
        for(int i=0;i<a;i++) nim[i]=0;
        nim[a]=1;
        for(int i=a+1;i<250;i++){
            int p=i-a;
            int q=i-b;
            if(q<0) nim[i]=!nim[p];
            else nim[i]=!(nim[p]&&nim[q]);
        }

        if(nim[delenie(s, a+b)]) cout<<"1\n";
        else cout<<"2\n";

    }
    return 0;
}
