#include<iostream>
using namespace std;
int main()
{
int n,m,T,L,countT,countL;
cin>>n>>m>>T>>L;
int a[1000005],filmCount[1000005];
for(int i=0;i<1000005;++i)
{
	a[i]=0;
	filmCount[i]=0;
}
for(int i=0;i<n;++i){cin>>a[i];filmCount[a[i]]++;}
//logic
int biggest=0,bigcount;
for(int i=0;i<1000005;++i)
{
	if(filmCount[i]>biggest)
	{
		biggest=filmCount[i];
		bigcount=0;
	}
	else
	{
		if(filmCount[i]==biggest){bigcount++;}
	}
}
int basetime=biggest*(T+L);
basetime+=(bigcount/m)*(T+L);
cout<<basetime;
return 0;
}
