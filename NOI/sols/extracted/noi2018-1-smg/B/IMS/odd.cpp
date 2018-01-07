#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int tests;
    cin>>tests;
    for(int t=0;t<tests;t++){
        int nechetni=0;
        char c='*';
        while(c!='\n'){
            int a;
            bool curr=false;
            while(c=='*'){
                cin>>a;
                if(a%2==0){
                    curr=true;
                }
                c=cin.get();
            }
            if(c=='+'){
                c='*';
            }
            //cout<<a<<" "<<nechetni<<" "<<curr<<"\n";
            if(!curr){
                nechetni++;
            }
        }
        cout<<nechetni%2<<"\n";
    }
    return 0;
}
