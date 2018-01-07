#include<iostream>
using namespace std;
int verdict[301];
int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int a,b;
	cin>>a>>b;
	for(int i=0;i<a;i++){
		verdict[i]=2;
	}
	for(int i=a;i<a+b;i++){
		if(verdict[i-a]==2||(i>=b&&verdict[i-b]==2)){
			verdict[i]=1;
		}else{
			verdict[i]=2;
		}
	}
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		string n;
		cin>>n;
		int tek=0;
		for(int j=0;j<n.size();j++){
			tek%=(a+b);
			tek*=10;
			tek+=(n[j]-'0');
		}
		tek%=(a+b);
		cout<<verdict[tek]<<"\n";
	}
	return 0;
}
