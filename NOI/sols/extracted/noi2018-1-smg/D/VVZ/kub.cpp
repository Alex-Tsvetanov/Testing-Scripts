#include <iostream>
using namespace std;
int main(){
 int a,b,c,cviat[7];
 for(int i=0;i<7;i++){
	cviat[i]=0;
 }
 cin >> a >> b >> c;
 if(a<1000 and b<1000 and c<1000){
	cviat[0]=(a-2)*(b-2)*(c-2);
	cviat[1]=(a-2)*(c-2)*2+(a-2)*(b-2)*2+(c-2)*(b-2)*2;
	cviat[2]=(a-2)*4+(b-2)*4+(c-2)*4;
    cviat[3]=8;
	if(a==1 and b==1){
		cviat[4]=c-2;
	}else{
	if(a==1 and c==1){
		cviat[4]=b-2;
	}else{
	    cviat[4]=a-2;
	}
	}
	if(a==1 and b==1 or a==1 and c==1 or b==1 and c==1){
		cviat[5]=2;
	}
	if(a==1 and b==1 and c==1 ){
		cviat[6]=1;
 }
 for(int i=0;i<7;i++){
	cout << "cviat " << i << "=" << cviat[i] << endl;
 }
 }
 cout << endl;
 return 0;
}
