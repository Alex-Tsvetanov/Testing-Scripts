#include <iostream>

int main()
{
	long long a, b;
	std::cin>>a>>b;
	if( a>b )
		std::swap(a,b);

	int m;
	std::cin>>m;
	for( int i=0;i<m;i++ )
	{
		long long n;
		std::cin>>n;
		if( a == b )
		{
			long long t = n/a;
			if( t%a == 0 )
				std::cout<<"2\n";
			else
				std::cout<<"1\n";
		}
	}
}
