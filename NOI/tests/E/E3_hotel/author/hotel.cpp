//Task: hotel
//Author: Kinka Kirilova-Lupanova
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	switch (n % 3)
     {
		case 0: {
			cout<<0<<" "<< n / 3<<endl;
			break;
	        	}
		case 1: {
			cout<<2<<" "<<n / 3 - 1<<endl;
			break;
	        	}
		case 2: {
			cout<<1<<" "<< n / 3<<endl;
			break;
		        }
		
	};
	return 0;
}
