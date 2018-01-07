#include<iostream>
using namespace std;
int prav[2][10000];
int tochki[2][100001];
int main(){
    int br=0;
    int n;
    int m;
    cin>>n>>m;
    cin>>prav[0][0]>>prav[1][0];
    for(int i=1; i<n; i++){
        cin>>prav[0][i];
        cin>>prav[1][i];
        prav[0][i] = prav[0][i] + prav[0][i-1];
    }

    for(int i=0; i<m; i++){
        cin>>tochki[0][i];
        cin>>tochki[1][i];
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(tochki[0][i]<prav[0][j]){
                if(tochki[1][i]<=prav[1][j]){
                    br++; break;
                }
            }if(tochki[0][i]==prav[0][j]){
                if(tochki[1][i]<=prav[1][j] || tochki[1][i]<=prav[1][j+1]){
                    br++; break;
                }
            }
        }

    }

    cout<<br;
    cout<<endl;

}
