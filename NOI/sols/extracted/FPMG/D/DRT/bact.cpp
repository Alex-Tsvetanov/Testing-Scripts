#include <iostream>

using namespace std;

int main()
{
    long long A[1000],B,C,D;
    long int K;
    int i;
    long long currentBroiBact;
    cin>>A[0];
    cin>>B>>C>>D>>K;
    for(i=0;i<K;i++){
        currentBroiBact=A[i]*B;
        if(currentBroiBact>=C){
            currentBroiBact=currentBroiBact-C;
            if(currentBroiBact>D){
                currentBroiBact=D;
            }
            A[i+1]=currentBroiBact;
        }else{
            currentBroiBact=0;
            break;
        }
    }
    cout<<currentBroiBact<<endl;
    return 0;
}

