#include<iostream>
#include<stack>
using namespace std;
int nums[100005];
int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	for(int i=0;i<5;i++){
		int curr=1;
		for(int j=0;j<n;j++){
			cin>>nums[j];
		}
		stack<int> s;
		for(int j=0;j<n;j++){
			while(s.empty()||s.top()!=nums[j]){
				if(curr>n){
					j=n;
					curr++;
					break;
				}
				s.push(curr++);
			}
			if(j!=n){
				s.pop();
			}
		}
		if(curr==n+1){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
	}
	cout<<"\n";
	return 0;
}
