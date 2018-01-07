#include<iostream>
using namespace std;
int main(){
int length, checkCount;
cin>>length>>checkCount;
int row[length];
int checkRequest[checkCount];
for(int i=0;i<length;i++){
    cin>>row[i];
}
for(int i=0;i<checkCount;i++){
    cin>>checkRequest[i];
}
int hits[2][checkCount];
for(int x=0;x<2;x++){
    for(int y=0;y<checkCount;y++){
        hits[x][y]=0;
    }
}
for(int x=0;x<checkCount;x++){
    for(int i=checkRequest[x];i<length;i++){
        if(row[checkRequest[x]-1]==row[i]){
            hits[1][x]++;
        }
    }
}
for(int x=0;x<checkCount;x++){
    for(int i=0;i<checkRequest[x]-1;i++){
        if(row[checkRequest[x]-1]==row[i]){
            hits[0][x]++;
        }
    }
}
for(int y=0;y<checkCount;y++){
    for(int x=0;x<2;x++){
        cout<<hits[x][y]<<" ";
    }
    cout<<"\n";
}
return 0;
}
