#include<iostream>
using namespace std;
int main(){
int x,y,z;
cin>>x>>y>>z;
int cubes=x*y*z;
int paintedSides[7];
for(int i=0;i<7;i++){
    paintedSides[i]=0;
}
if(x>=2 and y>=2 and z>=2){//0, 1 and 2 painted sides check
    paintedSides[0]=((x-2)*(x-2))*((y-2)*(y-2))*((z-2)*(z-2));
    paintedSides[1]=((y-2)*(z-2)+(y-2)*(x-2)+(y-2)*(x-2))*2;
    paintedSides[2]=(x-2+y-2+z-2)*4;
}
if((x==2 and y>2 and z>2) or (x>2 and y==2 and z>2) or (x>2 and y>2 and z==2)){//1 painted sides check
    if(x==2){
        paintedSides[1]=(y-2)*(z-2)*2;
    }
    if(y==2){
        paintedSides[1]=(x-2)*(z-2)*2;
    }
    if(z==2){
        paintedSides[1]=(y-2)*(x-2)*2;
    }
}
if(x>=2 and y>=2 and z>=2){//2, 3 and 4 painted sides check
    paintedSides[3]=8;
}else if((x==1 and y>=2 and z>=2) or (x>=2 and y==1 and z>=2) or (x>=2 and y>=2 and z==1)){//3 and 4 sides check
    if(x==1){
        paintedSides[3]=(y-2+z-2)*2;
        paintedSides[2]=(y-2)*(z-2);
    }
    if(y==1){
        paintedSides[3]=(x-2+z-2)*2;
        paintedSides[2]=(z-2)*(x-2);
    }
    if(z==1){
        paintedSides[3]=(y-2+x-2)*2;
        paintedSides[2]=(y-2)*(x-2);
    }
    paintedSides[4]=4;
}
if((x==1 and y==1 and z>1) or (x==1 and y>1 and z==1) or (x>1 and y==1 and z==1)){//4 and 5 painted sides check
    if(x>1){
        paintedSides[4]=x-2;
    }
    if(y>1){
        paintedSides[4]=y-2;
    }
    if(z>1){
        paintedSides[4]=z-2;
    }
    paintedSides[5]=2;
}
if(x==1 and y==1 and z==1){//6 painted sides check
    paintedSides[6]=1;
}
for(int i=0;i<7;i++){//output
    cout<<paintedSides[i]<<" ";
}
return 0;
}
