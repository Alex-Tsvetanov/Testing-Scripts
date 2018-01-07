#include<iostream>
using namespace std;
int main(){
int uchenici,broiTroini,broiDvoini;
bool imali=false;
cin>>uchenici;
for(broiTroini=100;broiTroini>=0 and imali==false; broiTroini-- ){
    for(broiDvoini=0;broiDvoini<=uchenici/2;broiDvoini++){
        if(broiDvoini*2+broiTroini*3==uchenici){
            cout<<broiDvoini<<" "<<broiTroini<<endl;
            imali=true;
        }

    }
}
return 0;
}
