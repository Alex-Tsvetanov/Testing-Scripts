#include<iostream>
#include<string>
using namespace std;
int main()
{
int n=0;
cin>>n;
string arr[10];
bool multiplication=0,mult_odd=false;
int unodd_count=0;
int last_value=0;
for(int i=0;i<10;++i)
{
	arr[i]="0";
}
for(int i=0;i<n;++i)
{
	cin>>arr[i];
	string str=arr[i];
	unodd_count=0;
	for(int j=0;j<str.length();++j)
	{
		if(str[j]=='+' or j==str.length()-1)
		{
			if(j==str.length()-1)
			{
				last_value=str[j];
			}
			if((!multiplication and last_value%2==1)or(multiplication and (!mult_odd and last_value%2==1)))
			{
				unodd_count++;
			}
			multiplication=false;
			mult_odd=false;
		}
		else
		{
			if(str[j]=='*')
			{
				multiplication=true;
				if(last_value%2==0)
				{
					mult_odd=true;
				}
			}
			else
			{
				last_value=str[j];
			}
		}
	}
	if(unodd_count%2==0)
	{
		cout<<"0"<<endl;
	}
	else
	{
		cout<<"1"<<endl;
	}
}
return 0;
}
