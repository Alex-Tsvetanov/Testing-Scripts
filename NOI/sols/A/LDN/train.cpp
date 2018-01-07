#include <iostream>

int b[100001];

int main()
{
	std::ios_base::sync_with_stdio( false );
	std::cin.tie( nullptr );

	int n;
	std::cin>>n;
	
	for( int t=0;t<5;t++ )
	{
		for( int i=0;i<n;i++ )
			std::cin>>b[i];
		int max = -1;
		bool ans = true;
		for( int i=0;i<n;i++ )
		{
			if( max < b[i] )
			{
				max = b[i];
			} else if( b[i] < b[i+1] and b[i+1] < max )
			{
				ans = false;
				break;
			}
		}
		std::cout<<ans;
	}
	std::cout<<"\n";
}


