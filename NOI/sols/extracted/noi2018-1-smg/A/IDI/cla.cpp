#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
struct change{
	int x;
	int length;
	change(){};
	change(int a,int b){
		x=a;
		length=b;
	}
};
vector<change> changes;
bool operator<(change a,change b){
	return a.x<b.x;
}
int p[]={1,0,-1,0};
int q[]={0,1,0,-1};
int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string cmd;
	cin>>cmd;
	int x=0,y=0;
	int dir=0;
	int curr=0;
	for(int i=0;i<cmd.size();i++){
		if(cmd[i]>='0'&&cmd[i]<='9'){
			curr*=10;
			curr+=(cmd[i]-'0');
			continue;
		}
		x+=curr*p[dir];
		y+=curr*q[dir];
		if(q[dir]!=0){
			changes.push_back({x,q[dir]*curr});
		}
		curr=0;
		if(cmd[i]=='+'){
			dir++;dir%=4;
		}
		if(cmd[i]=='-'){
			dir+=3;dir%=4;
		}
	}
	x+=curr*p[dir];
	y+=curr*q[dir];
	if(q[dir]!=0){
		changes.push_back({x,q[dir]*curr});
	}
	sort(changes.begin(),changes.end());
	curr=changes[0].length;
	int last=changes[0].x,ans=0;
	for(int i=1;i<changes.size();i++){
		ans+=abs(curr)*(changes[i].x-last);
		last=changes[i].x;
		curr+=changes[i].length;
	}
	cout<<ans<<"\n";
	return 0;
}
