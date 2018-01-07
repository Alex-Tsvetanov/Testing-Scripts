#include <iostream>
using namespace std;

int main(){
    long long n,k,i,j,br=0;
    cin >> n >> k;
    long long N[n],K[k];
    for(i=0;i<n;i++){
        cin >> N[i];
    }
    for(i=0;i<k;i++){
        cin >> K[i];
    }
    for(i=0;i<k;i++){
        for(j=0;j<K[i]-1;j++){
            if(N[j]==N[K[i]-1]){
                br++;
            }
        }
        cout << br << " ";
        br=0;
        for(j=K[i];j<n;j++){
            if(N[j]==N[K[i]-1]){
                br++;
            }
        }
        cout << br << endl;
        br=0;
    }
}
