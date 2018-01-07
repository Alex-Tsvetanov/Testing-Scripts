#include<iostream>
using namespace std;
long long width,height,depth;
long long nuli=0,edinici=0,dvoiki=0,troiki=8,chetvorki=0,petici=0,shestici=0;
int positivno(long long x){
    if(x<0){
        return 0;
    }else{
        return x;
    }
}
int ednoLiE(long long x){
    if(x==1 || x<0){
        return 0;
    }else{
        return x;
    }
}

int abs(long long x){
    if(x<0){
        return -x;
    }else{
        return x;
    }
}
int main(){
    cin>>width>>height>>depth;
    if(width>=2 && height>=2 && depth>=2){
        nuli=(width-2)*(height-2)*(depth-2);
        edinici=(width-2)*(height-2)*2+(width-2)*(depth-2)*2+(height-2)*(depth-2)*2;
        dvoiki=(width-2)*4+(height-2)*4+(depth-2)*4;
    }
    if((width==1 || height==1 || depth==1) && (width+height+depth!=3)){
        chetvorki=4;
        if(width==1){
            troiki=(height-2)*2+(depth-2)*2;
            dvoiki=(height-2)*(depth-2);
        }
        if(height==1){
            troiki=(width-2)*2+(depth-2)*2;
            dvoiki=(width-2)*(depth-2);
        }
        if(depth==1){
            troiki=(height-2)*2+(width-2)*2;
            dvoiki=(height-2)*(width-2);
        }
    }
    if((width==1 && height==1 && depth!=1) || (width!=1 && height==1 && depth==1) || (width==1 && depth==1 && height!=1)){
        chetvorki=width*height*depth-2;
        petici=2;
    }
    if(width==1 && height==1 && depth==1){
        shestici=1;
        troiki=0;
        chetvorki=0;
    }
    cout<<nuli<<" "<<edinici<<" "<<dvoiki<<" "<<troiki<<" "<<chetvorki<<" "<<petici<<" "<<shestici;
    return 0;
}
