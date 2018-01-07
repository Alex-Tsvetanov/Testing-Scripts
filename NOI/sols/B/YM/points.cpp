#include<iostream>
using namespace std;
int main()
{
int arr[10005][2],N,M,result=0;
cin>>N>>M;
for(int i=0;i<10005;++i)
{
	arr[i][0]=0;
	arr[i][1]=0;
}
for(int i=0;i<N;++i)
{
	cin>>arr[i][0]>>arr[i][1];
}
for(int i=0;i<M;++i)
{
	int suma=0,x=0,y=0;
	cin>>x>>y;
	bool first=1;
	for(int j=0;j<N and first;++j)
	{
		suma+=arr[j][0];
		if(suma>=x)
		{
			first=0;
			if(y<=arr[j][1])
			{
				result++;
			}
		}
	}
}
cout<<result;
return 0;
}
