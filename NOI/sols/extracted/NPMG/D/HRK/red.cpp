#include<iostream>
using namespace std;
long long chisla[100000],zapitvaniq[100000], lqvo[100000],dqsno[100000];
int main(){
long long broi,broizapitvaniq,broqch,broqch2,turseno,broqch3;
cin>>broi>>broizapitvaniq;
for(broqch=1;broqch<=broi;broqch++){
    cin>>chisla[broqch];
}
for(broqch=1;broqch<=broizapitvaniq;broqch++){
    cin>>zapitvaniq[broqch];
}
for(broqch=1;broqch<=broizapitvaniq;broqch++){
    turseno=chisla[zapitvaniq[broqch]];
    for(broqch2=zapitvaniq[broqch]-1;broqch2>1;broqch2=broqch2-1){
        if(chisla[broqch2]==turseno){
            lqvo[broqch]++;
        }
    }
    for(broqch2=zapitvaniq[broqch]+1;broqch2<=broi;broqch2++){
        if(chisla[broqch2]==turseno){

            dqsno[broqch]++;
        }
    }
}
for(broqch=1;broqch<=broizapitvaniq;broqch++){
    cout<<lqvo[broqch]<<" "<<dqsno[broqch]<<endl;
}
return 0;
}
