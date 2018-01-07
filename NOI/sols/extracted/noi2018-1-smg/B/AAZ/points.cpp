#include<iostream>
using namespace std;

bool in_rect(int, int);

int n,m;
int pointX[100001], pointY[100001], rectX[10001], rectY[10001];
int main(){
    int cnt = 0;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>rectX[i]>>rectY[i];
        if(i!=0){
            rectX[i] += rectX[i-1];
        }
    }
    for(int i=0; i<m; i++){
        cin>>pointX[i]>>pointY[i];

        if(in_rect(pointX[i], pointY[i])){
            cnt++;
        }

    }
    cout<<cnt<<"\n";
    ///
    return 0;
}
bool in_rect(int x, int y){
    for(int i=0; i<n; i++){
        if(i>0){
            if(x <= rectX[i] && y <= rectY[i] && x>=rectX[i-1]){
                return true;
            }
        } else {
            if(x <= rectX[i] && y <= rectY[i]){
                return true;
            }
        }
    }
    return false;
}
