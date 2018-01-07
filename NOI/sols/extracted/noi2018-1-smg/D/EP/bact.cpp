#include <iostream>

using namespace std;

int main(){
    long long A,B,C,D,K,current=0;
    cin>>A>>B>>C>>D>>K;
    current=A;
    for(long long i=0;i<K;i++){
        current=current*B+A;
        if(current<C){cout<<"0"<<endl;return 0;}
        current-=C;
        if(current>D){current=D;}
    }
    cout << current << endl;
    return 0;
}
